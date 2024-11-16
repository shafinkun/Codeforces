#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="codeforces";
    char st[11];
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>st;
        for(int i=0;i<=9;i++)
        {
            if(st[i]!=s[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}