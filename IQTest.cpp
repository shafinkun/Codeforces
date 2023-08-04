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

    int n;
    cin >> n;

    int a[n];
    int even = 0, odd = 0, eIndex = 0, oIndex = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
        {
            even = even + 1;
            eIndex = i+1;
        }
        else
        {
            odd = odd + 1;
            oIndex = i+1;
        }
    }

    if (even > odd)
    {
        cout << oIndex << endl;
    }

    else
    {
        cout << eIndex << endl;
    }

    return 0;
}