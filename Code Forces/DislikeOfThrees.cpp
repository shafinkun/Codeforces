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
        int a;
        cin >> a;

        int count = 0;
        for (int i = 1; count <= a; i++)
        {

            if (count == a)
            {
                cout << i - 1 << endl;
                break;
            }
            if (i % 3 == 0 || i % 10 == 3)
            {
            }
            else
            {
                count++;
            }
        }
    }

    return 0;
}