#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,num[n];
    cin>>t;
    while(t--)
    {   
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }  
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {if(i!=j && num[i]!=num[j]) cout<<num[i]<<endl;}
            }
    }
    return 0;
}