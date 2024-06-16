/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1985/problem/D

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int r, c;
    cin >> r >> c;

    char a[r][c];
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cin >> a[i][j];
        }
    }

    int firstRow = r, lastRow = -1, firstCol = c, lastCol = -1;
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            if(a[i][j] == '#')
            {
                firstRow = min(firstRow, i);
                lastRow = max(lastRow, i);
                firstCol = min(firstCol, j);
                lastCol = max(lastCol, j);
            }
        }
    }
    
    int centerRow = (firstRow + lastRow) / 2 + 1; 
    int centerCol = (firstCol + lastCol) / 2 + 1; 
    cout << centerRow << ' ' << centerCol << endl;
}

int main()
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