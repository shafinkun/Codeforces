#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int count1=0,count2=0,count3=0;
    for(int i=0;i<=n;i++)
    {
        if(s[i]=='1'){count1++;}
        else if(s[i]=='2'){count2++;}
        else if(s[i]=='3'){count3++;}
    }
    for(int i=1;i<=count1;i++)
    {
        if(count2==0 && count3==0 && i==count1)cout<<1;
        else cout<<"1+";
    }
    for(int i=1;i<=count2;i++)
    {
        if(count3==0 && i==count2)cout<<2;
        else cout<<"2+";
    }
    for(int i=1;i<=count3;i++)
    {
        if(i==count3)cout<<"3";
        else
        cout<<"3+";
    }
    return 0;
}