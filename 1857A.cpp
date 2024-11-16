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
        int n;
        cin >> n;

        int a;
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            cnt += a;
        }
        if(cnt % 2 == 0)
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