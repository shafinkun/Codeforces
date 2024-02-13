/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1931/problem/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes puts("YES")
#define no puts("NO")

void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
        tot += x;
    }
    int avg = tot / n;

    int temp = 0;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (dq[i] > avg)
        {
            temp += abs(dq[i] - avg);
        }
        else if (dq[i] < avg)
        {
            temp -= abs(dq[i] - avg);
            if (temp < 0)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag or temp != 0)
        no;
    else
        yes;

    return;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}