#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s,tex;
    cin>>fixed>>setprecision(2);
    cin>>s;
    if(s>=0.00 && s<=2000.00) {cout<<"Isento"<<endl;}
    else if(s<=3000.00) 
    {
        s=s-2000.00;
        tex=s*.08;
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<tex<<endl;
    }
    else if(s<=4500.00) 
    {
        s=s-3000.00;
        tex=s*.18+80.00;
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<tex<<endl;
    }
    else if(s>4500.00) 
    {
        s=s-4500.00;
        tex=(s*.28)+350.00;
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<tex<<endl;
    }
    return 0;
}