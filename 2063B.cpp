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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n), a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i < r)
        {
            a.pb(v[i]);
        }
        if (i >= l - 1)
        {
            b.pb(v[i]);
        }
    }

    sort(all(a));
    sort(all(b));

    int sum = 0, sum1 = 0;
    for (int i = 0; i < r - l + 1; i++)
    {
        sum += a[i];
    }
    for (int i = 0; i < r - l + 1; i++)
    {
        sum1 += b[i];
    }
    cout << min(sum, sum1) << "\n";
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