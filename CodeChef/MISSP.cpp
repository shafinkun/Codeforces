#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0,num;
    cin>>t;
    while(t--)
    {   
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num % 2 != 0) count++;
        }  
    }
    cout<<count;
    return 0;
}