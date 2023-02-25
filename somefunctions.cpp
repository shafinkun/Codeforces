//Basic functions
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
void devision(int,int);
int main()
{
    int i,j;
    cout<<"Input numbers : ";
    cin>>i>>j;
    addition(i,j);
    subtraction(i,j);
    multiplication(i,j);
    devision(i,j);
    return 0;
    getch;
}
    void addition(int a, int b)
    {
        int sum=a+b;
        cout<<"Addition is: "<<sum<<endl;

    }
    int subtraction(int a, int b)
    {
        int diff=a-b;
        cout<<"Subtraction is: "<<diff<<endl;
        return 0;
    }
    int multiplication(int a, int b)
    {
        int mul=a*b;
        cout<<"multiplication is: "<<mul<<endl;
        return 0;
    }
    void devision(int a,int b)
    {
       double div=(double)a/b;
        cout<<"Subtraction is: "<<div<<endl;
    }
