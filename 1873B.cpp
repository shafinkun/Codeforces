#include <bits/stdc++.h>
using namespace std;

#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define mp make_pair
#define pb push_back
#define fi first
#define se second

const int MOD = 1e9 + 7;
const int INF = 1e9;

// Shortcuts for common functions
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define forr(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define ford(i, a, b) for (int i = (int)(a); i >= (int)(b); --i)

// Binary Exponentiation
ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        x = x * x;
        y >>= 1;
    }
    return res;
}

// Greatest Common Divisor
ll gcd(ll a, ll b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

// Debugging Macros
#ifdef DEBUG
#define dbg(x) cerr << #x << " : " << x << endl
#else
#define dbg(x)
#endif

void solve()
{
    short n;
    cin >> n;
    deque<int> dq(n);
    for (auto &a : dq)
        cin >> a;

    int mini = INF, mini_pos;
    for (int i = 0; i < n; i++)
    {
        if (mini > dq[i])
        {
            mini = dq[i];
            mini_pos = i;
        }
    }

    dq[mini_pos] = dq[mini_pos] + 1;

    ll result = 1;
    for (auto a : dq)
    {
        result = result * a;
    }

    cout << result << endl;
}

int main()
{
    optimize();

    short t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}