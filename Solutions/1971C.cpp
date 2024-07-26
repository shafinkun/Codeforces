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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a > b) swap(a, b);
    if(c > d) swap(c, d);

    // cerr << a << " " << b << " " << c << " " << d << endl;
    
    if(c >= a and c <= b)
        if(d >= a and d <= b)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    else
        if(d >= a and d <= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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