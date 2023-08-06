#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
        cin.tie(0),               \
        cout.tie(0)
using namespace std;

int main()
{
    optimize();

    short t;
    cin >> t;

    while (t--)
    {
        short n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k == 1)
            {
                cout << "NO" << endl;
            }
            else if (k >= 2 && (n % 2 == 0))
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else if (k >= 3 && ((n % 2) != 0))
            {
                cout << "YES" << endl;
                cout << n / 2<< endl;
                cout << 3 << " ";
                for (int i = 1; i <= (n - 3) / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}