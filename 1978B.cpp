/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link :

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
    ll n, a, b;
    cin >> n >> a >> b;

    if (a >= b)
    {
        cout << n * a << endl;
    }
    else
    {
        ll total = 0;
        if (n <= b - a + 1)
        {
            total = ((2 * b - n + 1) * n) / 2; 
        }
        else
        {
            ll diff = b - a + 1;          
            total = ((b + a) * diff) / 2; 
            total += (n - diff) * a;      
        }
        cout << total << endl;
    }
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