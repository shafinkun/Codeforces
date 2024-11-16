#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
        cin.tie(0),               \
        cout.tie(0)
using namespace std;

int main()
{
    optimize();

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i].first == v[j].second)
                cnt++;
            if (v[i].second == v[j].first)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}