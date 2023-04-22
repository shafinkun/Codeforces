//conversion of temperature celcius to fahrenheit
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int c,f;

    cout<<setw(50)<<"Temperature in celcius:";
    cin>>c;
    f=(9/5)*(c+32);
    cout<<"\t\t\t\t"<<"In Fahrenheit:"<<f;

    return 0;
    getch;
}
