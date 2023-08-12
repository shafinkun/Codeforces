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
    short n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k <= 2 * i; k++)
        {
        	if(k == 2*i) cout << 0 ;
            else if (k <= i)
            {
                cout << k << " ";
            }
            else if (k > i)
            {
                cout << 2 * i - k << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k <= 2 * i; k++)
        {
        	if(k == 2*i) cout << 0;
            else if (k <= i)
            {
                cout << k << " ";
            }
            else if (k > i)
            {
                cout << 2 * i - k << " ";
            }
        }
        cout << endl;
    }

    return 0;
}