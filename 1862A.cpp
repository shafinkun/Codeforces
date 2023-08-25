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
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define br break
#define cont continue

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
}

int main()
{
    optimize();

    short t;
    cin >> t;
    while (t--)
    {
        short r, c;
        cin >> r >> c;
        char a[r][c];
        for (int i = 0; i < r; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < c; j++)
            {
                a[i][j] = s[j];
            }
        }
        short cnt = 0;
        for (int j = 0; j < c; j++)
        {
            for (int i = 0; i < r; i++)
            {
                if (cnt == 0 && a[i][j] == 'v')
                {
                    cnt++;
                    br;
                }
                else if (cnt == 1 && a[i][j] == 'i')
                {
                    cnt++;
                    br;
                }
                else if (cnt == 2 && a[i][j] == 'k')
                {
                    cnt++;
                    br;
                }
                else if (cnt == 3 && a[i][j] == 'a')
                {
                    cnt++;
                    br;
                }
            }
            if (cnt == 4)
            {
                YES;
                br;
            }
        }
        if (cnt != 4)
        {
            NO;
        }
    }
    return 0;
}