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
        set<int> s;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (s.size() == n)
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