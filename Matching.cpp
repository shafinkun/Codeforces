#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char num[5];
        gets(num);
        int a=1;
        for (int i = 0; num[i] != 0; i++)
        {
            int a1=a;
            if (i = 0)
            {
                if (num[i] == '?')
                {
                    a = 9;
                }
                else if (num[i] == 0)
                {
                    a = 0;
                    break;
                }
                else
                {
                    a = 1;
                }
            }
            else
            {
                if (num[i] == '?')
                {
                    a = 10;
                }
                else
                {
                    a = 1;
                }
            }
            a=a1*a;
        }
        cout<<a<<endl;
    }
    return 0;
}