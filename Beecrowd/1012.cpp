#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    double pi=3.14159,areatri,circle,trapezium,square,rectangle;
    cin>>a>>b>>c;
     areatri=.5*a*c; 
     circle=pi*(c*c); 
     trapezium=.5*(a+b)*c;
     square=b*b;
     rectangle=a*b;
    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<areatri<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<circle<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<trapezium<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<square<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<rectangle<<endl;
    return 0;
}