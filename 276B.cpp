/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/276/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for (auto x : s)
    {
        mp[x]++;
    }

    int odd = 0;
    for(auto x : mp)
    {
        if(x.second & 1)
        {
            odd++;
        }
    }

    if(odd <= 1 || odd & 1)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }

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