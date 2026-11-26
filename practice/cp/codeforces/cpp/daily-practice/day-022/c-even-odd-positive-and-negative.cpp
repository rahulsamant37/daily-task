/*
Problem: C. Even, Odd, Positive and Negative
Contest: Codeforces - Sheet #2 (Loops)
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
Memory Limit: 256 MB
Time Limit: 1000 ms
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define endl '\n'

#ifdef LOCAL
#define debug(x) cerr << "[DEBUG] " << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

template<typename T>
void show_all(std::string_view rem, const T& v)
{
    std::cout << rem << ": ";
    for (const auto& e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    setup_io();
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    int even_n = 0, odd_n = 0, pos_n = 0, neg_n = 0;
    rep(i, 0, n) {
        if (arr[i] < 0) {
            neg_n++;
        } else if (arr[i] > 0) {
            pos_n++;
        }
        if (arr[i]%2==0) {
            even_n++;
        } else {
            odd_n++;
        }
    }
    cout << "Even: " << even_n << endl;
    cout << "Odd: " << odd_n << endl;
    cout << "Positive: " << pos_n << endl;
    cout << "Negative: " << neg_n << endl;

    return 0;
}
