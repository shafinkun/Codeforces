//binary pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++){
        if((i+k)%2!=0){cout<<0;}
        else{cout<<1;}}
        cout<<endl;
    }
    return 0;
    getch;
}
