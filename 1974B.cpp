/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1974/problem/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s, r;
    cin >> s;

    r = s;
    sort(r.begin(), r.end());
    auto it = unique(r.begin(), r.end());
    r.erase(it, r.end());

    int sz = r.size();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < sz; j++)
        {
            if(s[i] == r[j])
            {
                int ind = abs(j - sz + 1);
                cout << r[ind];
                break;
            }
        }
    }
    cout << endl;

    // s -> 6 , ind = 6 - 7 + 1 = 0
    // e -> 2, ind = 2 - 6 = -4
    // r -> 5, ind = 5 - 6 = -1
    // o -> 4, ind = 4 - 6 = -2
    // n -> 3, ind = 3 - 6 = -3
    // d -> 1, ind = 1 - 6 = -5
    // s -> 0, ind = 0 - 6 = -6
    // e -> 2, ind = 2 - 6 = -4
    // n -> 3, ind = 3 - 6 = -3
    // d -> 1, ind = 1 - 6 = -5
    
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