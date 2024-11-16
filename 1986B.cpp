/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link :

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int r, c;
    cin >> r >> c;

    int a[r][c];
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {  
            bool f1 = true, f2 = true, f3 = true, f4 = true;

            int temp = 0;
            if (j < c - 1)
            {
                if (a[i][j] <= a[i][j + 1])
                {
                    f1 = false;
                }
                temp = max(temp, a[i][j + 1]);
            }
            if (j > 0)
            {
                if (a[i][j] <= a[i][j - 1])
                {
                    f2 = false;
                }
                temp = max(temp, a[i][j - 1]);
            }
            if (i < r - 1)
            {
                if (a[i][j] <= a[i + 1][j])
                {
                    f3 = false;
                }
                temp = max(temp, a[i + 1][j]);
            }
            if (i > 0)
            {
                if (a[i][j] <= a[i - 1][j])
                {
                    f4 = false;
                }
                temp = max(temp, a[i - 1][j]);
            }

            if (f1 and f2 and f3 and f4)
            {
                a[i][j] = temp;
            }
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

signed main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}