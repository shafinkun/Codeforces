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

    short q;
    cin >> q;

    while (q--)
    {
        short n, t;
        cin >> n >> t;

        deque<int> dq(n);
        deque<int> dq1(n);
        for (auto &a : dq)
        {
            cin >> a;
        }
        for (auto &a : dq1)
        {
            cin >> a;
        }
        int mx = 0, pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (dq[i] <= t)
            {
                if (dq1[i] > mx)
                {
                    mx = dq1[i];
                    pos = i + 1;
                }
            }
            
            t--;
        }
        cout << pos << endl;
    }

    return 0;
}