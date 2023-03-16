#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,m,t;
    cin>>fixed>>setprecision(2);
    cin>>n;
    if(n>=0 && n<=400.00) {m=n*.15;
        t=n+m;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<t<<" \nReajuste ganho: "<<m<<" \nEm percenrual: 15 %"<<endl;}
    else if(n>=400.01 && n<=800.00) {m=n*.12;
        t=n+m;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<t<<" \nReajuste ganho: "<<m<<" \nEm percenrual: 12 %"<<endl;}
    else if(n>=800.01 && n<=1200.00) {m=n*.1;
        t=n+m;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<t<<" \nReajuste ganho: "<<m<<" \nEm percenrual: 10 %"<<endl;} 
    else if(n>=1200.01 && n<=2000.00) {m=n*.07;
        t=n+m;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<t<<" \nReajuste ganho: "<<m<<" \nEm percenrual: 7 %"<<endl;} 
    else if(n>2000.00) {m=(n*.04);
        t=n+m;
        cout<<fixed<<setprecision(2);
        cout<<"Novo salario: "<<t<<" \nReajuste ganho: "<<m<<" \nEm percenrual: 4 %"<<endl;}   
    return 0;          
}