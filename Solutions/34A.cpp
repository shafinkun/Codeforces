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
    int n;
    cin >> n;
    vi v(n);
    forn(i, n) cin >> v[i];
    int min = INF;
    int a, b;
    forn(i, n - 1)
    {
        if (abs(v[i] - v[i + 1]) < min)
        {
            min = abs(v[i] - v[i + 1]);
            a = i;
            b = i + 1;
        }
    }
    if (abs(v[0] - v[n - 1]) < min)
    {
        b = 0;
        a = n - 1;
    }
    cout << a + 1 << " " << b + 1 << endl;
}

int main()
{
    optimize();

    solve();

    return 0;
}