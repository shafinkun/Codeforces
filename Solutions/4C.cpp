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

    int t;
    cin >> t;
    map<string, int> mp;

    while (t--)
    {

        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << mp[s] << endl;
        }
        mp[s]++;
    }

    return 0;
}