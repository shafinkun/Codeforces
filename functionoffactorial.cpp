//Well you know how it's done just do it
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Give two integers ";
    cin>>n1>>n2;
    int mult1=1;
    for(int i=n1;i>=1;i--)
    {
        mult1=mult1*i;
    }
    int mult2=1;
    for(int i=n2;i>=1;i--)
    {
        mult2=mult2*i;
    }
    cout<<"Factorial of "<<n1<<" is : "<<mult1<<endl;
    cout<<"Factorial of "<<n2<<" is : "<<mult2<<endl;

    return 0;
    getch;
}
