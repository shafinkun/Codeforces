#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,Sum,Sub,Mul,Div,Remainder;

    cout << "Input two numbers:";
    cin>>num1>>num2;

    Sum=num1+num2;
    cout<<"Sum is:"<<Sum\n;

    Sub=num1-num2;
    cout<<"Sub is:"<<Sub;
    Mul=num1*num2;
    cout<<"Multi is:"<<Mul;
    Div=num1/num2;
    cout<<"Division is:"<<Div;
    Remainder=num1%num2;
    cout<<"Remainder is:"<<Remainder;

    getch;
}
