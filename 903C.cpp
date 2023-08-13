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

    short n;
    cin >> n;

    map<ll, ll> m;

    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        if (m[x] > mx)
            mx = m[x];
    }
    
    cout << mx << endl;

    return 0;
}