#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();
    
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
    return 0;
}