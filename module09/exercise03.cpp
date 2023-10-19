#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main() {
    vector<int> numbers{4, 8, 15, 16, 23, 42};
    auto is_even = [](int u) {
        cout << "[is_even]: " << u << endl;
        return u % 2 == 0;
    };
    auto to_cube = [](int v){
        cout << "[to_cube]: " << v << endl;
        return v*v*v;
    };
    for (auto number: numbers | ranges::views::filter(is_even)
                                  | ranges::views::transform(to_cube)
    ) {
        cout << "[for loop]: " << number << endl;
    }
    return 0;
}