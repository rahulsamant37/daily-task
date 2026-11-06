
/*
Author: Rahul Samant
Created: 2026-11-06 22:05:35
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

void solve() {
    int n;
    cin >> n;

    vector<vi> adj(n + 1);

    rep(i, 0, n - 1) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(n % 2 == 0) {
        cout << n + 1 << endl;
        return;
    }

    auto check = [&](int k, int excluded) -> bool {
        vi comp(n + 1, -1);
        int id = 0;

        for(int start : adj[excluded]) {
            stack<int> st;
            st.push(start);
            comp[start] = id;

            while(!st.empty()) {
                int u = st.top();
                st.pop();

                for(int v : adj[u]) {
                    if(v == excluded || comp[v] != -1)
                        continue;

                    comp[v] = id;
                    st.push(v);
                }
            }
            id++;
        }

        rep(i, 1, n + 1) {
            int j = k - i;

            if(j < 1 || j > n || i >= j)
                continue;

            if(comp[i] != comp[j])
                return true;
        }

        return false;
    };

    vector<pii> candidates = {
        {n, n},
        {n + 1, (n + 1) / 2},
        {n + 2, 1}
    };

    for(auto [k, excluded] : candidates) {
        if(check(k, excluded)) {
            cout << k << endl;
            return;
        }
    }

    cout << n << endl;
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

