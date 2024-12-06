/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/2050/problem/C
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
    string s;
    cin >> s;

    int sum = 0, twos = 0, threes = 0;
    for (char c : s)
    {
        if (c == '2')
            twos++;
        else if (c == '3')
            threes++;

        sum += c - '0';
    }

    for(int i = 0; i <= min(100LL, twos); ++i)
    {
        for(int j = 0; j <= min(100LL, threes); ++j)
        {
            if(( sum + (2LL * i + 6LL * j)) % 9LL == 0)
            {
                yes;
                return;
            }
        }
    }

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