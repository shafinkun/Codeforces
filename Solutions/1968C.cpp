/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1968/problem/C

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
    int n;
    cin >> n;
    
    vector<int> v;
    v.push_back(700);

    for(int i = 1; i < n; ++i)
    {
        int temp;
        cin >> temp;
        v.push_back(temp + v[i - 1]);
    }

    for(auto x : v)
        cout << x << ' ';
    
    cout << endl;
    
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