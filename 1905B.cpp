/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1905/problem/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    
    unordered_map<int, int> mp;

    for (int i = 0; i < n - 1; ++i)
    {
        int x , y;
        cin >> x >> y;
        mp[x]++;
        mp[y]++;
    }

    int leaf = 0;
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            leaf++;
        }
    }
    //  cerr << leaf << endl;

    cout << ceil(leaf / 2.0) << endl;

    return;
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
}