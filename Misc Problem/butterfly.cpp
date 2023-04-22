//The butterfly pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int l=(2*n-2*i);l>=1;l=l-1)
        {
            cout<<" ";
        }
        for(int q=1;q<=i;q++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //This is for the lower part
    for(int w=n;w>0;w--)
    {
        for(int e=w;1<=e;e--)
        {
            cout<<"*";
        }
        for(int r=1;r<=(2*n-2*w);r++) //remember you struggled for this really hard
        {
            cout<<" ";
        }
        for(int q=w;1<=q;q--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
