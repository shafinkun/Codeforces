#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    optimize();

    string s;
    getline(cin , s);
    int count = 0;
    
    vector<char> v;
    for(int i = 1; i < (s.size())-1; i++){
        if(s[i] != ',' && s[i] != ' '){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    auto sz = unique(v.begin(),v.end());
    v.erase(sz , v.end());

    cout << v.size() << endl;

    return 0;
}