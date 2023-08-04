#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool check=true;
        string s;
        cin >> s;
        for (int i = 0,j=1; i < s.size() / 2,j<=s.size() / 2; i++,j++)
        {
            cout<<"\t"<<s[i]<<"\t"<<s[j];
            if (s[i] == s[j])
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}