#include <bits/stdc++.h>
#define int long long
#define N 1000005
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int t, n, m;

// Hàm tính hạng của ma trận
int rankA(vector<vector<int>> &a, int m, int n)
{
    int rank = n; // Ban đầu giả sử rank = số cột
    for (int row = 0; row < rank; row++)
    {
        // Nếu phần tử đường chéo chính là 0, tìm hàng khác để đổi
        if (a[row][row] == 0)
        {
            bool found = false;
            for (int i = row + 1; i < m; i++)
            {
                if (a[i][row] != 0)
                {
                    swap(a[i], a[row]);
                    found = true;
                    break;
                }
            }
            // Nếu không tìm thấy hàng nào có phần tử khác 0, giảm rank
            if (!found)
            {
                rank--;
                for (int i = 0; i < m; i++)
                    a[i][row] = a[i][rank]; // Di chuyển cột cuối cùng thay thế
                row--;
                continue;
            }
        }

        // Khử các phần tử khác 0 trong cột hiện tại
        for (int i = 0; i < m; i++)
        {
            if (i != row)
            {
                int factor = a[i][row] / a[row][row];
                for (int j = row; j < n; j++)
                {
                    a[i][j] -= factor * a[row][j]; // Sử dụng hàng pivot (row)
                }
            }
        }
    }
    return rank;
}

signed main()
{
    fastio
            cin >>
        t;
    while (t--)
    {
        cin >> m >> n;
        vector<vector<int>> a(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << rankA(a, m, n) << '\n';
    }
    return 0;
}
