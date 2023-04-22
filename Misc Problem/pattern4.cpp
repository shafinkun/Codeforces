//half pyramid
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
