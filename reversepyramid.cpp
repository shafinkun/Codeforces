//Let's do it again
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=n;k>=i;k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
    getch;
}
