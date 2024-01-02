/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1915/D

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s, s1;
    cin >> s;
    s1 = "";
    
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] =='u')
        {
            s1 += s[i];
            i--;
            s1 += s[i];
            if(i != 0)
                s1 += '.';
        }
        else
        {
            s1 += s[i];
            i--;
            s1 += s[i];
            i--;
            s1 += s[i];
            if(i != 0)
                s1 += '.';
        }
    }
    reverse(s1.begin(), s1.end());
    cout << s1 << endl;

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