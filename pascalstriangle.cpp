//Pascal's Triangle
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int damn=1;
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<damn<<" ";
            damn=damn*(i-k)/k;

        }
        cout<<endl;
    }
    return 0;
    getch;
}
