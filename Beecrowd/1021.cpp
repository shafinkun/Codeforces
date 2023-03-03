#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>fixed>>setprecision(2);
    cin>>x;
    int y;
    y=x*100;
    int hund,fift,twen,ten,five,two,one;
    hund=y/10000;
    y=y%10000;
    fift=y/5000;
    y=y%5000;
    twen=y/2000;
    y=y%2000;
    ten=y/1000;
    y=y%1000;
    five=y/500;
    y=y%500;
    two=y/200;
    y=y%200;
    one=y/100;
    y=y%100;
    int fiftypen,quater,tenpen,fivepen,onepen;
    fiftypen=y/50;
    y=y%50;
    quater=y/25;
    y=y%25;
    tenpen=y/10;
    y=y%10;
    fivepen=y/5;
    y=y%5;
    onepen=y/1;
    y=y%1;
    cout<<"NOTAS:\n";
    cout<<hund<<" nota (s) de R$ 100.00\n";
    cout<<fift<<" nota (s) de R$ 50.00\n";
    cout<<twen<<" nota (s) de R$ 20.00\n";
    cout<<ten<<" nota (s) de R$ 10.00\n";
    cout<<five<<" nota (s) de R$ 5.00\n";
    cout<<two<<" nota (s) de R$ 2.00\n";
    cout<<"MOEDAS:\n";
    cout<<one<<" moeda (s) de R$ 1.00\n";
    cout<<fiftypen<<" moeda (s) de R$ 0.50\n";
    cout<<quater<<" moeda (s) de R$ 0.25\n";
    cout<<tenpen<<" moeda (s) de R$ 0.10\n";
    cout<<fivepen<<" moeda(s) de R$ 0.05\n";
    cout<<onepen<<" moeda (s) de R$ 0.01\n";
    return 0;
    
    
}