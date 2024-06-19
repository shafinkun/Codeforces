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
    ll x, y, z, k;
    cin >> x >> y >> z >> k;

    ll X, Y, Z;
    for (int i = 1; i <= x; ++i)
    {   
        bool flag = false;
        for (int j = 1; j <= y; ++j)
        {
            ll temp = i * j;
            if (k % temp == 0 and (k / temp) <= z)
            {
                X = i;
                Y = j;
                Z = (k / temp);
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    // cerr << X << " " << Y << " " << Z << endl;
    // for x axis
    ll cntX = 0;
    for (int i = 0; i <= x; ++i)
    {
        if (i + X > x)
            break;
        cntX++;
    }
    // for y axis
    ll cntY = 0;
    for (int i = 0; i <= y; ++i)
    {
        if (i + Y > y)
            break;
        cntY++;
    }
    // for z axis
    ll cntZ = 0;
    for (int i = 0; i <= z; ++i)
    {
        if (i + Z > z)
            break;
        cntZ++;
    }

    cout << cntX * cntY * cntZ << endl;

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