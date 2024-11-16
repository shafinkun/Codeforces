/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/43/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
void solve()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    cerr << s << endl;
    cerr << t << endl;

    unordered_map<char, int> mp1, mp2;
    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i] != ' ')
            mp1[s[i]]++;
    }
    
    for (ll i = 0; i < t.size(); ++i)
    {
        if (t[i] != ' ')
            mp2[t[i]]++;
    }

    for (auto x : mp2)
    {
        if (mp1[x.first] < x.second)
        {
            cerr << x.first << " " << x.second << endl;
            cerr << mp1[x.first] << endl;   
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

    return;
}

int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}