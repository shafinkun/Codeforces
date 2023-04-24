#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count=0,num;
    cin>>t;
    cin>>n;
    while(t--)
    {   
        int m=n;
        for(int i=0;i<m;i++)
        {
            cin>>num;
            if(num % 2 != 0) count++;
        }  
    }
    cout<<count;
    return 0;
}