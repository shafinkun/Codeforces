#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
    cin.tie(0),                 \
    cout.tie(0)
using namespace std;

int main()
{  
    optimize();

    int n;
    cin >> n;

    map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(mp[s] == 0){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
        mp[s]++;
    }
    
    return 0;
}