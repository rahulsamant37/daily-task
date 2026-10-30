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
    int var = 8;
    void* ptr = &var;
    cout << ptr << endl;
    int* ref = static_cast<int*>(ptr);
    cout << *ref << endl;
    return 0;
}
