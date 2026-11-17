/*
Problem: L. The Brothers
Contest: Codeforces - Sheet #1 (Data type - Conditions)
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
Time limit: 1000
Memory limit: 256
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
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    int n, m;
    n = s1.size(), m = s2.size();
    if (n!=m) {
        cout << "NOT";
        return 0;
    }
    for (int i = 0; i<=n; i++){
        if (s1[i]!=s2[i]) {
            cout << "NOT";
            return 0;
        }
    }
    cout << "ARE Brothers";
    return 0;
}
