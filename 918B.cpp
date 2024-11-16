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

    short n , m;
    cin >> n >> m;

    unordered_map<string, string> mp;
    for(int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s2] = s1;
    }
    
    map<string , string> mp2;
    for(int i = 0; i < m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s2.pop_back();

        cout << s1 << " " << s2 << "; #" << mp[s2] << endl;
    }


    return 0;
}