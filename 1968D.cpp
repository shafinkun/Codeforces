/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1968/D

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

void solve(int a)
{
    ll n, turn, b, s;
    cin >> n >> turn >> b >> s;

    vector<int> LL(n + 1), Val(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> LL[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> Val[i];
    }

    ll ScB = Val[b];
    int mini = min(turn, n);
    int ptr = b, i = 1;
    for (; i < mini; ++i)
    {
        if (Val[ptr] > Val[LL[ptr]])
        {
            ScB += Val[ptr];
            ptr = LL[ptr];
            break;
        }
        else
        {
            ScB += Val[LL[ptr]];
            ptr = LL[ptr];
        }
    }
    ScB += (turn - i) * Val[ptr];

    ll ScS = Val[s];
    mini = min(turn, n);
    ptr = s, i = 1;
    for (; i < mini; ++i)
    {
        if (Val[ptr] > Val[LL[ptr]])
        {
            ScS += Val[ptr];
            ptr = LL[ptr];
            break;
        }
        else
        {
            ScS += Val[LL[ptr]];
            ptr = LL[ptr];
        }
    }
    ScS += (turn - i) * Val[ptr];

    if (ScB > ScS)
        cout << "Bodya\n";

    else if (ScB < ScS)
        cout << "Sasha\n";

    else
        cout << "DRAW\n";

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