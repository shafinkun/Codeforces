#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    optimize();
    int n;
    cin >> n;

    unordered_map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    if(mp.size() == 1)
    {
        cout << mp.begin()->first << endl;
    }
    else
    {
        unordered_map<string, int>::iterator it = mp.begin();
        if(it->second > ++it->second)
        {
            cout << mp.begin()->first << endl;
        }
        else
        {
            cout << (++mp.begin())->first << endl;
        }

    }
    return 0;
}