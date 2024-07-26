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
    int n, m;
    cin >> n >> m;
    
    vector<char>v;
    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        v.push_back(c);
    }

    int cntA = count(v.begin(), v.end(), 'A');
    int cntB = count(v.begin(), v.end(), 'B');
    int cntC = count(v.begin(), v.end(), 'C');
    int cntD = count(v.begin(), v.end(), 'D');
    int cntE = count(v.begin(), v.end(), 'E');
    int cntF = count(v.begin(), v.end(), 'F');
    int cntG = count(v.begin(), v.end(), 'G');

    int A = (m - cntA) > 0 ? (m - cntA) : 0;
    int B = (m - cntB) > 0 ? (m - cntB) : 0;
    int C = (m - cntC) > 0 ? (m - cntC) : 0;
    int D = (m - cntD) > 0 ? (m - cntD) : 0;
    int E = (m - cntE) > 0 ? (m - cntE) : 0;
    int F = (m - cntF) > 0 ? (m - cntF) : 0;
    int G = (m - cntG) > 0 ? (m - cntG) : 0;

    cout << A + B + C + D + E + F + G << endl;

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