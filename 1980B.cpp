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
    int n, f, k;
    cin >> n >> f >> k;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int fav = v[f - 1];
    // cerr << fav << endl;
    int favCnt1 = count(v.begin(), v.end(), fav);

    sort(v.rbegin(), v.rend());
    v.erase(v.begin(), v.begin() + k);

    auto it = find(v.begin(), v.end(), fav);

    if(it != v.end())
    {
        int favCnt2 = count(v.begin(), v.end(), fav);

        // cerr << favCnt1 << " " << favCnt2<< endl;
        if(favCnt2 == favCnt1)
        {
            cout << "NO" << endl;
        }
        else {
            cout << "MAYBE" << endl;
        }
    }
    else {
        cout << "YES" << endl;
    }


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