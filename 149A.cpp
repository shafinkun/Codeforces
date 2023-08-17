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
        short x, k;
        cin >> x >> k;

        if (x % k != 0)
        {
            cout << 1 << '\n' << x << endl;
        }
        else
        {
            cout << 2 << '\n' << 1 << " " << x - 1 << endl;
        }
    }

    return 0;
}