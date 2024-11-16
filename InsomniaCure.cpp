#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
        return 0;
    }

    vector<int> v;
    for (int i = 1; i <= d; i++)
    {
        v.push_back(i);
    }

    for (int i = 0; i < d; i++)
    {
        if (v[i] % k == 0 || v[i] % l == 0 || v[i] % m == 0 || v[i] % n == 0)
        {
            v[i] = 0;
        }
    }

    int damaged = count(v.begin(), v.end(), 0);

    cout << damaged << endl;

    return 0;
}