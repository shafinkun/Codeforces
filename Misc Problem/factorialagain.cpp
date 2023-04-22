//Remember you've done it very smoothly like a master
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void factorial(int a)
{
    int fact=1;
    for(int i=a;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
}
int main()
{
    int n1;
    cout<<"Input number one : ";
    cin>>n1;
    cout<<"\nFactorial of "<<n1<<" is ";
    factorial(n1);
    int n2;
    cout<<"\nInput number two : ";
    cin>>n2;
    cout<<"Factorial of "<<n2<<" is ";
    factorial(n2);
    return 0;
    getch;
}

