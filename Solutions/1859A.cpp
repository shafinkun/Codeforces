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
        short n;
        cin >> n;

        deque<int> dq(n);
        for (auto &a : dq)
        {
            cin >> a;
        }

        sort(dq.begin(), dq.end());

        if (dq.at(n - 1) == dq.at(0))
        {
            cout << "-1" << endl;
        }
        else
        {
            int cnt = count(dq.begin(), dq.end(), dq.at(0));
            int mn = dq.at(0);

            cout << cnt << ' ' << n - cnt << endl;

            for (int i = 1; i <= cnt; i++)
            {
                cout << mn << " ";
            }
            cout << endl;

            for (int i = cnt; i < n; ++i)
            {
                cout << dq[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}