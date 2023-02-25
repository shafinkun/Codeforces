//number pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
    getch;
}
