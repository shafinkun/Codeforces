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
    
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int count = 0;
        if (a < b)
        {
            count++;
        }
        if (a < c)
        {
            count++;
        }
        if (a < d)
        {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}