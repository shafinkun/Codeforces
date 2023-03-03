#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,r1,r2;
    cin>>a>>b>>c;
    double t=b*b-4*a*c;
    if(t<0 || a==0){cout<<"Impossivel calcular\n";}
    else 
       {r1=((-b+sqrt(t))/(2*a));
       r2=((-b-sqrt(t))/(2*a));
       cout<<fixed<<setprecision(5);
       cout<<"R1 ="<<r1<<endl;
       cout<<"R2 ="<<r2<<endl;}

    return 0;
}