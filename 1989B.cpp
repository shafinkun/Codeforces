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
    string a, b;
    cin >> a >> b;

    int n = a.size() + b.size(), cnt = 0;
    string res = a;

    for(char c : b) {
        if(find(res.begin(), res.end(), c) == res.end()) {
            res += c;
        }
    }

    cout << res.size() << endl;
    
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