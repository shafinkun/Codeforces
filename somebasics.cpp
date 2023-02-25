//formatting output
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,sum,sub,mul,rem,div;
    cout<<showpoint;
    cout<<fixed;//this helps to increase the number except the decimal unit
    cout<<setprecision(10);//this is including the decimal unit

    cout<<"Give two numbers: ";
    cin>>a>>b;

    sum=a+b;
    cout<<setw(10)<<"Sum is="<<sum<<endl;

    sub=a-b;
    cout<<setw(10)<<"Sub is="<<sub<<endl;

    mul=a*b;
    cout<<setw(10)<<"Mul is="<<mul<<endl;

    div=a/b;
    cout<<setw(10)<<"Div is="<<div<<endl;

    return 0;
    getch;
}
