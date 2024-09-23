/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/2005/A
// Inquilab Zindabad!!!
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

    string s = "aeiou", t = "uoiea";

    bool flag = false;
    deque<char> dq;
    for (int i = 0; i < n; ++i)
    {
        int temp = i % 5;
        if (i != 0 and abs(i - 1) % 5 == 0 and flag == false)
            flag = true;
        else if(i != 0 and abs(i - 1) % 5 == 0 and flag == true)
            flag = false;

        if (flag)
            dq.push_back(t[temp]);
        else
            dq.push_back(s[temp]);
    }

    for (auto x : dq)
        cout << x;
    cout << endl;

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