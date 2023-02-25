//Let's do some primary things
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,remainder;
    cout<<"Input n1: ";
    cin>>n1;
    cout<<"\nInput n2: ";
    cin>>n2;
    int a=n1,b=n2;
    while(b>0){
            remainder=a%b;
            a=b;
            b=remainder;
    }
    cout<<"\nGCD is: "<<a;
    int LCM=(n1*n2)/a;
    cout<<"\nLCM is: "<<LCM;
    return 0;
}
