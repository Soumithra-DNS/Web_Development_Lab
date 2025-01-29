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
void read(vector<T> &v)
{
    for (auto &x : v)
        cin >> x;
}

template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
        cout << x << " ";
    cout << "\n";
}

void solve()
{
    // Add your solution here

    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1 << "\n"
            << 1 << "\n";
        return;
    }

    if (k == 1 || k == n)
    {
        cout << -1 << "\n";
        return;
    }

    if (k % 2 == 0)
    {
        cout << 3 << "\n";
        cout << 1 << " " << k << " " << k + 1 << "\n";
    }
    else
    {
        cout << 3 << "\n";
        cout << 1 << " " << k - 1 << " " << k + 2 << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}