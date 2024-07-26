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
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
        else
        {
            cout << 7;
            n -= 3;
            for (int i = 0; i < n / 2; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
    }
    return 0;
}