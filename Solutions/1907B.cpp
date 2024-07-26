///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pf push_front
#define F first
#define S second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{

    string s;
    cin >> s;

    vector<int> cap, small;
    vector<int> ans(sz(s), 1);

    for (int i = 0; i < sz(s); i++)
    {
        if (s[i] == 'b')
        {
            if (!small.empty())
            {
                ans[small.back()] = 0;
                small.pop_back();
            }
            ans[i] = 0;
        }
        else if (s[i] == 'B')
        {
            if (!cap.empty())
            {
                ans[cap.back()] = 0;
                cap.pop_back();
            }
            ans[i] = 0;
        }
        else if (isupper(s[i]))
        {
            cap.pb(i);
        }
        else
        {
            small.pb(i);
        }
    }

    for (int i = 0; i < sz(s); i++)
    {
        if (ans[i])
        {
            cout << s[i];
        }
    }
    cout << endl;

    return;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}