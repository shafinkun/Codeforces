#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,c;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        if((r*c)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}