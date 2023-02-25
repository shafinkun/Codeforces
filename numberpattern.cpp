//number pyramid
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(int f=1;f<=i;f++)
        {
            cout<<f<<" ";
        }
        cout<<endl;
    }
    return 0;
    getch;
}
