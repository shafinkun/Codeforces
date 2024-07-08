/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1983/problem/B

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

    vector<string> a, b;

    for (int i = 0; i < r; i++)
    {
        string temp;
        cin >> temp;
        a.push_back(temp);
    }

    for (int i = 0; i < r; i++)
    {
        string temp;
        cin >> temp;
        b.push_back(temp);
    }

    for (int i = 0; i < (r - 1); ++i)
    {
        for (int j = 0; j < (c - 1); ++j)
        {
            int temp1 = a[i][j] - '0';      //well you can't add a char with an integer
            int temp2 = a[i + 1][j + 1] - '0';          //can you???
            int temp3 = a[i][j + 1] - '0';              //how silly!!!!
            int temp4 = a[i + 1][j] - '0';

            int tempB = b[i][j] - '0';

            if ((temp1 + 1) % 3 == tempB)
            {
                a[i][j] = to_string((temp1 + 1) % 3)[0];
                a[i + 1][j + 1] = to_string((temp2 + 1) % 3)[0];
                a[i][j + 1] = to_string((temp3 + 2) % 3)[0];
                a[i + 1][j] = to_string((temp4 + 2) % 3)[0];
            }
            else if ((temp1 + 2) % 3 == tempB)
            {
                a[i][j] = to_string((temp1 + 2) % 3)[0];
                a[i + 1][j + 1] = to_string((temp2 + 2) % 3)[0];
                a[i][j + 1] = to_string((temp3 + 1) % 3)[0];
                a[i + 1][j] = to_string((temp4 + 1) % 3)[0];
            }
        }
    }

    // for (int i = 0; i < c; ++i)
    //     cerr << a[i] << endl;

    for (int i = 0; i < r; ++i)
    {
        if (a[i] != b[i])
        {
            no;
            return;
        }
    }

    yes;

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