#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=2*n;
        int check=1;
        int arr[m];
        for(int i=0;i<m;i++)
        {cin>>arr[i];}
        for(int i=0;i<m;i++)
        {
            for(int j=m-1;j>=0;j--)
            if(arr[i]==arr[j])
            {   
                check=0 ;
                break;
            }
        }
        if(check)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}