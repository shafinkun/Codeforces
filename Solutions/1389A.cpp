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
        ll l, r;
        cin >> l >> r;
        if ((l * r / __gcd(l, r)) <= r)
        {
            cout << l << " " << r << endl;
            continue;
        }
        if (r >= (2 * l))
        {
            cout << l << " " << 2 * l << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}