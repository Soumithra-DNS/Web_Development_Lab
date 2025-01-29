#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pf push_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second

const int MOD = 1e9 + 7;
const int INF = 1e18;
const ld PI = 3.141592653589793238462;
const ld EPS = 1e-9;
const int N = 3e5 + 9;

template <typename T>
void read(vector<T> &v) {
    for (auto &x : v) cin >> x;
}

template <typename T>
void show(const T &container) {
    for (const auto &x : container) cout << x << " ";
    cout << "\n";
}

vector<int> build_lps(const string &p) {
    int m = p.size();
    vector<int> lps(m, 0);
    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && p[i] != p[j]) {
            j = lps[j - 1];
        }
        if (p[i] == p[j]) {
            j++;
        }
        lps[i] = j;
    }
    return lps;
}

vector<int> kmp(const string &s, const string &p) {
    int n = s.size(), m = p.size();
    vector<int> ans;
    vector<int> lps = build_lps(p);
    show(lps);
    for (int i = 0, j = 0; i < n; i++) {
        while (j > 0 && s[i] != p[j]) {
            j = lps[j - 1];
        }
        if (s[i] == p[j]) {
            j++;
        }
        if (j == m) {
            ans.push_back(i - m + 1);
            j = lps[j - 1];
        }
    }
    return ans;
}

void solve() {
    string s = "babcabcdab";
    string p = "aabaaab";
    vector<int>ans = kmp(s, p);
    show(ans);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}