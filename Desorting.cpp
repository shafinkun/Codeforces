#include <bits/stdc++.h>
#define LL long long
#define endl '\n'
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
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &a : v)
        {
            cin >> a;
        }

        if (is_sorted(v.begin(), v.end()))
        {
            int mini = 1e9;
            int low = 0, up = 0;
            for (int i = 1; i < n; ++i)
            {
                int diff = v[i] - v[i - 1];
                if (mini > diff)
                {
                    mini = diff;
                }
            }

            int result = (int)(mini / 2) + 1;

            cout << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}