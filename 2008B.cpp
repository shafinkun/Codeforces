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
#define yes cout << "Yes\n"
#define no cout << "No\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int r = sqrt(n);
    if(r*r != n)
    {
        no;
        return;
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(i == 0 or i == r - 1)
            {
                if(s[i*r + j] == '0')
                {
                    no;
                    return;
                }
            }
            else
            {
                if(j == 0 or j == r - 1)
                {
                    if(s[i*r + j] == '0')
                    {
                        no;
                        return;
                    }
                }
                else
                {
                    if(s[i*r + j] == '1')
                    {
                        no;
                        return;
                    }
                }
            }
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