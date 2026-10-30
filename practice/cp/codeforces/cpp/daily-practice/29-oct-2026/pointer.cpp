#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

template<typename T>
void show_all(std::string_view rem, const T& v)
{
    std::cout << rem << ": ";
    for (const auto& e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

int main() {
    int nums = 8;
    int* ptr = &nums;
    cout << *ptr << endl;
    // Dereferencing
    *ptr = 10;
    cout << *ptr << endl;
    return 0;
}
