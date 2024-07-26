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
    vector<string> v;
    // for(auto &a : v)
    //     cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    ll ones = 0;
    for (int i = 0; i < 10; i++)
    {
        if (v[0][i] == 'X')
        {
            ones++;
        }
        if (v[9][i] == 'X')
        {
            ones++;
        }
        if (i == 0)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (v[j][i] == 'X')
                    ones++;
            }
        }
        if (i == 9)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (v[j][i] == 'X')
                    ones++;
            }
        }
    }
    //check
    // cout << ones << endl;

    ll twos = 0;
    for (int i = 1; i <= 8; i++)
    {
        if (v[1][i] == 'X')
        {
            twos++;
        }
        if (v[8][i] == 'X')
        {
            twos++;
        }
        if (i == 1)
        {
            for (int j = 2; j <= 7; j++)
            {
                if (v[j][i] == 'X')
                    twos++;
            }
        }
        if (i == 8)
        {
            for (int j = 2; j <= 7; j++)
            {
                if (v[j][i] == 'X')
                    twos++;
            }
        }
    }
    //check
    // cout << twos << endl;
    twos *= 2;

    ll threes = 0;
    for (int i = 2; i <= 7; i++)
    {
        if (v[2][i] == 'X')
        {
            threes++;
        }
        if (v[7][i] == 'X')
        {
            threes++;
        }
        if (i == 2)
        {
            for (int j = 3; j <= 6; j++)
            {
                if (v[j][i] == 'X')
                    threes++;
            }
        }
        if (i == 7)
        {
            for (int j = 3; j <= 6; j++)
            {
                if (v[j][i] == 'X')
                    threes++;
            }
        }
    }
    //check
    // cout << threes << endl;
    threes *= 3;

    ll fours = 0;
    for (int i = 3; i <= 6; i++)
    {
        if (v[3][i] == 'X')
        {
            fours++;
        }
        if (v[6][i] == 'X')
        {
            fours++;
        }
        if (i == 3)
        {
            for (int j = 4; j <= 5; j++)
            {
                if (v[j][i] == 'X')
                    fours++;
            }
        }
        if (i == 6)
        {
            for (int j = 4; j <= 5; j++)
            {
                if (v[j][i] == 'X')
                    fours++;
            }
        }
    }
    //check
    // cout << fours << endl;
    fours *= 4;

    ll fives = 0;
    for (int i = 4; i <= 5; i++)
    {
        if (v[4][i] == 'X')
        {
            fives++;
        }
        if (v[5][i] == 'X')
        {
            fives++;
        }
    }
    //check
    // cout << fives << endl;
    fives *= 5;

    // cout << ones <<" " << twos << ' ' << threes << ' ' << fours << ' ' << fives << ' '<<endl; 
    ll result = ones + twos + threes + fours + fives;
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