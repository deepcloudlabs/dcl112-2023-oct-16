#include <iostream>
#include <vector>
#include <parallel/algorithm>
#include <parallel/numeric>

using namespace std;

int main() {
    //int numbers[]{4, 8, 15, 16, 23, 42};
    vector<int> numbers {4, 8, 15, 16, 23, 42};
    // pipeline: function composition
    //           i) higher-order function ii) pure function
    vector<int> even_numbers;
    copy_if(numbers.begin(),numbers.end(), back_inserter(even_numbers),[](int u){return u%2 == 0;});
    vector<int> cubed_numbers;
    transform(even_numbers.begin(),even_numbers.end(), back_inserter(cubed_numbers),[](int v){return v*v*v;});
    auto solution = accumulate(cubed_numbers.begin(),cubed_numbers.end(),0,[](int s,int n){return s+n;});
    // imperative programming: Solution is 78760
    cout << "Solution is " << solution << endl;
    return 0;
}