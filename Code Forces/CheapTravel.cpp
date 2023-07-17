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

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int nPrice = n * a;

    int sPrice = 0;

    if (m >= n)
    {
        sPrice = b;

        if (sPrice <= nPrice)
        {
            cout << sPrice << endl;
        }
        else
        {
            cout << nPrice << endl;
        }
    }
    else
    {

        sPrice = (n / m) * b;

        if (n % m == 0)
        {
            if (sPrice <= nPrice)
            {
                cout << sPrice << endl;
            }
            else
            {
                cout << nPrice << endl;
            }
        }

        else
        {
            sPrice += (n % m) * a;
            int anoPrice = ((n / m) + 1) * b;

            int mini = min(anoPrice, min(sPrice, nPrice));
            cout << mini << endl;
        }
    }

    return 0;
}