//Let's come to know about tolower
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char c,result;
    cout<<"Input any small alphabet: ";
    cin>>c;
    result=tolower('c');
    cout<<"\nIn capital: "<<result;

    char m,result2;
    cout<<"\nInput any capital alphabet: ";
    cin>>m;
    result=tolower(m);
    cout<<"\nIn small: "<<result2;

    return 0;
}
