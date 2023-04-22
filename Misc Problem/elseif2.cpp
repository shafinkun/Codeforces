#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Input tree positive integer";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<"is greater\n";
        }
        else{ cout<<c<<"is greater\n";}
    }
    else if(b>c)
    {
            cout<<b<<"is greater\n";
    }
    else{cout<<c<<"is greater\n";}
    return 0;
    getch;

}

