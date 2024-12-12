/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/2047/B
// Inqilab Zindabad!!!
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
    
    string s;
    cin >> s;

    int ind1, ind2, mx = 0, mini = MOD;
    map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[s[i]]++;
        if(mp[s[i]] > mx)
        {
            mx = mp[s[i]];
            ind1 = i;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(mp[s[i]] <= mini)
        {
            mini = mp[s[i]];
            ind2 = i;
        }
    }
    s[ind2] = s[ind1];
    cout << s << endl;

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