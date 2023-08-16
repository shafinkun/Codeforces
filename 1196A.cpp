#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    optimize();

    short t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << (ll)(a + b + c) / 2 << endl;
    }

    return 0;
}