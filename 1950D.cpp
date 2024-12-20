/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link :

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    string N;
    cin >> N;

    int sz = N.size();
    int n = stoi(N);

    deque<int> dq;

    for (int i = 1; i < (1 << sz); ++i)
    {
        string temp = bitset<64>(i).to_string();
        dq.push_back(stoi(temp));
    }

    for(int i = 1; i <= n; ++i)
    {
        
    }
    

    return;
}
signed main()
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