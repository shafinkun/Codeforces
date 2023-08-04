#include <bits/stdc++.h>
#define endl '\n'
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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        auto s = unique(v.begin(), v.end());
        v.erase(s, v.end());

        if (v.size() == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        bool check = true;

        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] - v[i] > 1)
            {
                check = false;
                break;
            }
        }
        if (check)
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
