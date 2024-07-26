/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1968/problem/A

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
    int x;
    cin >> x;

    map<int, int> mp;
    int mx = 0;
    for(int y = 1; y < x; y++)
    {
        int temp = __gcd(x, y) + y;
        if(temp > mx)
        {
            mx = temp;
            mp[mx] = y;
        }
    }
    cout << mp[mx] << endl;

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
    return 0;
}