#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
    cin.tie(0),                 \
    cout.tie(0)
using namespace std;

int main()
{
    
    optimize();

    int n;
    cin >> n;

    deque<int> dq(n);
    for(auto &i : dq)
        cin >> i;

    int mx = 0, mn = 101, mx_idx = 0, mn_idx = 0;  
    for(int i = 0; i < n; i++)
    {
        if(dq[i] > mx)
        {
            mx = dq[i];
            mx_idx = i;
        }
        if(dq[i] <= mn)
        {
            mn = dq[i];
            mn_idx = i;
        }
    }
    int result = mx_idx + (n - 1 - mn_idx);

    if(mx_idx > mn_idx)
        result--;

    cout << result << endl;


    return 0;

}