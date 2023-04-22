//let's do some zig zag pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input the value of n: ";
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((j+i)%4==0){cout<<"*";}
            else if(i==2 && j%4==0){cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
    getch;
}
