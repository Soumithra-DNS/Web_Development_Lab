#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200001];
int deg[200001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
            deg[i] = 0;
        }

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            ++deg[u];
            ++deg[v];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int mxdeg = 0, cnt = 0, maxNode = 0;
        for (int i = 1; i <= n; ++i) {
            if (deg[i] > mxdeg) {
                mxdeg = deg[i];
                cnt = 1;
                maxNode = i;
            } else if (deg[i] == mxdeg) {
                ++cnt;
            }
        }

        if (cnt > 2) {
            cout << mxdeg * 2 - 1 << "\n";
        } else {
            for (int j : adj[maxNode]) {
                --deg[j];
            }
            deg[maxNode] = 0;

            int smxdeg = 0;
            for (int i = 1; i <= n; ++i) {
                smxdeg = max(smxdeg, deg[i]);
            }

            cout << mxdeg + smxdeg - 1 << "\n";
        }
    }

    return 0;
}
