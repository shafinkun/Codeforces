#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c,d,e,f,g;
    cin>>x;
    cout<<x<<endl;
    a=x/100;
    x=x%100;
    b=x/50;
    x=x%50;
    c=x/20;
    x=x%20;
    d=x/10;
    x=x%10;
    e=x/5;
    x=x%5;
    f=x/2;
    x=x%2;
    g=x/1;
    x=x%1;
    cout<<a<<" nota(s) de R$ 100,00"<<endl;
    cout<<b<<" nota(s) de R$ 50,00"<<endl;
    cout<<c<<" nota(s) de R$ 20,00"<<endl;
    cout<<d<<" nota(s) de R$ 10,00"<<endl;
    cout<<e<<" nota(s) de R$ 5,00"<<endl;
    cout<<f<<" nota(s) de R$ 2,00"<<endl;
    cout<<g<<" nota(s) de R$ 1,00"<<endl;
    return 0;

    
}