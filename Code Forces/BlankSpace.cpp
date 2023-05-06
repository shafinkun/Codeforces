#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0,temp=0;
        int n;
        cin>>n;
        int num[n];
        for(int i=0;i<n;i++)
           {cin>>num[i];}
        for(int i=0;i<n;i++)
        {
            if(num[i]==0){
                temp++;
                if(count<temp)count=temp;
            }
            else {temp=0;}
        }
        cout<<count<<endl;

    }
}