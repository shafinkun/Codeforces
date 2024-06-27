/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1984/problem/C1

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

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    //let's try dp!
    int selected = 0, neglected = 0;
    for(int i = 0; i < n; ++i)
    {
        int temp1 = selected + v[i];
        int temp2 = abs(selected + v[i]);

        int temp3 = neglected + v[i];
        int temp4 = abs(neglected + v[i]);

        selected = max(temp1, max(temp2, max(temp3, temp4)));
        neglected = min(temp1, min(temp2, min(temp3, temp4)));
    }

    int c = max(selected, abs(neglected));

    cout << c << endl;
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