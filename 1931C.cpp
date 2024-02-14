/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1931/problem/C

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

void solve(int a)
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (auto &x : dq)
        cin >> x;

    int first = dq.front(), cnt1 = 1;
    for (int i = 1; i < n; ++i)
    {
        if (dq[i] != first)
        {
            break;
        }
        cnt1++;
    }
    
    if (cnt1 == n)
    {
        cout << 0 << endl;
        // cerr << a << " " << "cnt1 = " << cnt1 << " n = " << n << endl;
        return;
    }

    for(int i = n - 1; i > 0; --i)
    {
        if(dq[i] != first)
        {
            break;
        }
        cnt1++;
    }

    int last = dq.back(), cnt2 = 1;
    for(int i = n - 2; i >= 0; --i)
    {
        if(dq[i] != last)
        {
            break;
        }
        cnt2++;
    }
    
    for(int i = 0; i < n - 1; ++i)
    {
        if(dq[i] != last)
        {
            break;
        }
        cnt2++;
    }

    int ans = max(cnt1, cnt2);

    // cerr << a << " " << "cnt1 = " << cnt1 << " cnt2 = " << cnt2 << endl;
   
    cout << n - ans << endl;

    return;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}