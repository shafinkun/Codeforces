#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, m, count = 0;
    char s[100];
    cin >> t;
    while (t--)
    {
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {count = 0;}

             if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                {
                   count++;
                   if(count==4){cout<<"NO"<<endl;}
                }
        }
            if(count<4){cout<<"YES"<<endl;}
        }
    return 0;
}