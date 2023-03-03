#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float a;
    cin>>x>>y;
    switch(x){
        case(1):
         a=y*4.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a<<endl;
        break;
        case(2):
         a=y*4.50;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a<<endl;
        break;
        case(3):
         a=y*5.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a<<endl;
        break;
        case(4):
         a=y*2.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a<<endl;
        break;
        case(5):
         a=y*1.50;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<a<<endl;
        break;
    }
    return 0;
}