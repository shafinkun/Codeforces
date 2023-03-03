#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if(x<0.000000||x>100.000000){cout<<"Fora de intervalo\n";}
    if(x>=0.000000&&x<=25.000000){cout<<"Intervalo "<<"[0,25]"<<endl;}
    if(x>25.000000&&x<=50.000000){cout<<"Intervalo "<<"(25,50]"<<endl;}
    if(x>50.000000&&x<=75.000000){cout<<"Intervalo "<<"(50,75]"<<endl;}
    if(x>75.000000&&x<=100.000000){cout<<"Intervalo "<<"(75,100]"<<endl;}
    return 0;
}