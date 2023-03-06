#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,s,area;
    cin>>fixed>>setprecision(1);
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        s=(a+b+c);
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<s<<endl;
    }
    else {
        area=.5*(a+b)*c;
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<area<<endl;
    }
    return 0;
}