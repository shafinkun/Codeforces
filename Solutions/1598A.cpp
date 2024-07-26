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

    short t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s1 , s2;
        cin >> s1 >> s2;
        
        bool check = true;
        for(int i = 1 ; i < n ; i++)
        {
            if(s1[i] == '1' && s2[i] == '1')
            {   check = false;
                cout << "NO" << endl;
                break;
            }
        }
        if(check) {
            cout << "YES" << endl;
        }
    }

    return 0;
}