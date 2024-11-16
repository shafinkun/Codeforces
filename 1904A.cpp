/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1904/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes puts("YES")
#define no puts("NO")

void solve()
{
    int a, b, k1, k2, q1, q2;
    cin >> a >> b >> k1 >> k2 >> q1 >> q2;

    // For king:
    set<pair<int, int>> s;

    int x1 = k1 + a;
    int x2 = k1 + b;
    int x3 = k1 - a;
    int x4 = k1 - b;

    int y1 = k2 + a;
    int y2 = k2 + b;
    int y3 = k2 - a;
    int y4 = k2 - b;

    s.insert({x1, y2});
    s.insert({x2, y1});
    s.insert({x3, y2});
    s.insert({x4, y1});
    s.insert({x2, y3});
    s.insert({x1, y4});
    s.insert({x3, y4});
    s.insert({x4, y3});

    // For queen
    set<pair<int, int>> s1;
    int w1 = q1 + a;
    int w2 = q1 + b;
    int w3 = q1 - a;
    int w4 = q1 - b;

    int z1 = q2 + a;
    int z2 = q2 + b;
    int z3 = q2 - a;
    int z4 = q2 - b;

    s1.insert({w1, z2});
    s1.insert({w2, z1});
    s1.insert({w3, z2});
    s1.insert({w4, z1});
    s1.insert({w2, z3});
    s1.insert({w1, z4});
    s1.insert({w3, z4});
    s1.insert({w4, z3});

    // Debugging
    cerr << "For King: " << endl;
    for (auto i : s)
    {
        cerr << i.first << ' ' << i.second << endl;
    }
    cerr << "For Queen: " << endl;
    for (auto i : s1)
    {
        cerr << i.first << ' ' << i.second << endl;
    }

    int cnt = 0;
    if (s.size() >= s1.size())
    {
        for (auto i : s1)
        {
            if (s.find(i) != s.end())
            {
                cnt++;
            }
        }
    }
    else
    {
        for (auto i : s)
        {
            if (s1.find(i) != s1.end())
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

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