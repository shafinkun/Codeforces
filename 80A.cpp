#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
bool check(short a);
int main()
{
    optimize();
    short n, m;
    cin >> n >> m;

    if (!check(m))
    {
        cout << "NO" << endl;
    }
    else
    {
        short nxtPrime;
        for(short i = n + 1 ; i <= m ; i++)
        {
            if(check(i))
            {
                nxtPrime = i;
                break;
            }
        }
        if(nxtPrime == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
bool check(short a)
{
    for(short i = 2 ; i*i <= a ; i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}