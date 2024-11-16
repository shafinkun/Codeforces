/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/222/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];


    bool flag = true;
    for (int i = k - 1; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            flag = false;
            break;
        }
    }

    int cnt = 0;
    for (int i = k - 2; i >= 0; i--)
    {
        if (v[i] == v[k - 1])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    int step = k - 1 - cnt;
    if (step < k and flag)
    {
        cout << step << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return;
}

int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}