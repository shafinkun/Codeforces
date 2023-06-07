#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s[1]=='+')x++;
        else if(s[1]=='-')x--;
    }
    cout<<x;
    return 0;
}