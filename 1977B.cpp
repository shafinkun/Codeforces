/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1977/problem/B

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

    bitset<32> bin(n);
    string b = bin.to_string();
    int num = 0;
    cerr << b << endl;
    for (int i = 0; i < 32; i++)
    {
        int temp = 1 << i;
        if (num == 0 and b[i] == '0' and b[i + 1] == '1')
        {
            b[i] = '1';
            num = temp;
        }
        else if ((num - temp) >= n)
        {
            b[i] = '$';
            num -= temp;
        }
        else
        {
            b[i] = '0';
        }
    }

    cout << 32 << endl;
    for (int i = 31; i >= 0; --i)
    {
        if (b[i] == '$')
        {
            cout << -1 << ' ';
        }
        else
        {
            cout << b[i] << ' ';
        }
    }
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