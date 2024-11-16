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
    int n;
    cin >> n;

    vector<char> v(1, '$');

    for(int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        
        if(c == '0' and v.back() == '0') continue;
        v.push_back(c);
    }
    int ones = count(v.begin(), v.end(), '1');
    int zeros = count(v.begin(), v.end(), '0');


    if (ones > zeros)
        yes;
    else
        no;
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