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
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size() - 1; ++i)
    {
        if(s[i] != s[i + 1])
        {
            cout << "YES\n";
            swap(s[i], s[i + 1]);
            cout << s << endl;
            return;
        }    
    }
    cout << "NO\n";
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