//area of an triangle
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    double b,h,area;
    cout<<"Input the base:";
    cin>>b;
    cout<<"Input the height:";
    cin>>h;

    area=.5*b*h;

    cout<<setw(15)<<"Area is:"<<area;

    return 0;
    getch;
}
