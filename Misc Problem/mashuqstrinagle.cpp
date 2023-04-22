#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Value of a of the triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {cout<<" ";}
            for(int k=2*i;k>1;k--)
            {
                if(i==n)cout<<1;
                else if(k==2*i||k==2)cout<<1;
                else cout<<0;
            }
        cout<<endl;
    }
}