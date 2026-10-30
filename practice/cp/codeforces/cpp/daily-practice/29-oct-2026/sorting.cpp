#include <bits/stdc++.h>
#include <functional>
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // sorting ascending order
    sort(arr.begin(), arr.end());
    show_all("Ascending", arr);

    // sorting decending order
    sort(arr.begin(), arr.end(), greater<int>());
    show_all("Descending",arr);
    
    return 0;
}
