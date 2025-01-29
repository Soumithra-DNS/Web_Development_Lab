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
    string a, b = "", c = "";
    cin >> a;
    int ind = -1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 'a')
            b += a[i];
        else
            ind = i;
    }

    int n = b.size();
    if (n & 1)
    {
        cout << ":(" << "\n";
        return;
    }
    if (n == 0)
    {
        cout << a << "\n";
        return;
    }
    int l = 0;
    for (int i = a.size() - 1; c.size() < n / 2; i--)
    {
        if (a[i] == 'a')
        {
            cout << ":(" << "\n";
            return;
        }
        c = a[i] + c;
        l = i;
    }

    string x = b.substr(0, n / 2);
    string y = c.substr(0, c.size());
    if (x == y)
    {
        cout << a.substr(0, l) << "\n";
    }else{
        cout << ":(" << "\n";
            return;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}