#include <iostream>
#include <vector>

using namespace std;

// application state -> data
int solution = 0;

int main() {
    //int numbers[]{4, 8, 15, 16, 23, 42};
    vector<int> numbers {4, 8, 15, 16, 23, 42};
    for (const auto &number: numbers) { // external loop
        if (number % 2 == 0) { // even number
            auto cubed = number * number * number;
            solution += cubed;
        }
    }
    // imperative programming: Solution is 78760
    cout << "Solution is " << solution << endl;
    return 0;
}