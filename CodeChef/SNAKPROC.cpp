#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    string s;
    char sr[500];
    cin>>t;
    while(t--)
    {
        int a=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.') continue;
            sr[a]=s[i];
            a++;
        } 
        cout<<sr;
    }
    return 0;
}