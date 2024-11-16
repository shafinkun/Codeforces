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

    short t;
    cin >> t;

    while (t--)
    {
        string s , s1 = "yes";
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }

        if(s == s1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}