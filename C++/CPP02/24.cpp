#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int t, n, m;
int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[] = {0, 1, -1, 0, 1, -1, 1, -1};


int ok(int p, int q) {
    return 1 <= q && q <= m && 1 <= p && p <= n;
}


void Try(int p, int q, vector<vector<int>> &a, vector<vector<int>> &visited) {
    visited[p][q] = 1;
    for (int i = 0; i < 8; i++) {
        int np = p + dx[i];
        int nq = q + dy[i];
        if (ok(np, nq) && a[np][nq] && !visited[np][nq]) {
            Try(np, nq, a, visited);
        }
    }
}

signed main() {
    fastio;
    cin >> t;
    while (t--) {
        int res = 0;
        cin >> n >> m;
        vector<vector<int>> a(n + 2, vector<int>(m + 2, 0));
        vector<vector<int>> visited(n + 2, vector<int>(m + 2, 0));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (a[i][j] && !visited[i][j]) {
                    res++;
                    Try(i, j, a, visited);
                }
        cout << res << "\n";
    }
    return 0;
}
