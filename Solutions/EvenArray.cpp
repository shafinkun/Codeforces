#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();

    short t;
    cin >> t;
    while (t--)
    {

        int odd = 0, even = 0;
        bool check = true;
        int n ;
        cin >> n;
        
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (check)
            {
                if (a % 2 != 0)
                {
                    odd++;
                }
                check = false;
            }
            else
            {
                if (a % 2 == 0)
                {
                    even++;
                }
                check = true;
            }
        }
        if (even == odd)
        {
            cout << even << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}