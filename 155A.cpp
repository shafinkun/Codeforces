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

    short mx = 0, mn = 0, cnt = 0;
    for(int i = 0 ; i < t ; i++)
    {
        short x;
        cin >> x;
        if(i == 0)
        {
            mx = x;
            mn = x;
        }
        else
        {
            if(x > mx)
            {
                mx = x;
                cnt++;
            }
            else if(x < mn)
            {
                mn = x;
                cnt++;
            }
        }
    }
        

    cout << cnt << endl;
    return 0;
}