//make a diamond shape
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        for(int l=1;l<i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int q=1;q<=n;q++)
    {
        for(int e=1;e<q;e++)
        {
            cout<<" ";
        }
        for(int w=n;w>=q;w--)
        {
            cout<<"*";
        }
        for(int r=n;r>q;r--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
    getch;
}
