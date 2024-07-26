/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1742/problem/C

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
    vector<string> v(8);

    for (auto &x : v)
        cin >> x;

    //check row wise that means count "R"
    for(int i = 0; i < 8; i++)
    {
        int cntR = count(v[i].begin(), v[i].end(), 'R');
        if(cntR == 8)
        {
            cout << 'R' << endl;
            return;
        }
    }

    cout << 'B' << endl;
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