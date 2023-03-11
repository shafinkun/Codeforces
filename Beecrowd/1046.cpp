#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,hours;
    cin>>h1>>h2;
    if(h1>h2) {hours=((h2+24)-h1);
            cout<<"O JUGO DUROU "<<hours<<" HORA(S)"<<endl;}
    else if(h2>h1) {hours=(h2-h1);
            cout<<"O JUGO DUROU "<<hours<<" HORA(S)"<<endl;}
    else if(h1=h2) {hours=24;
            cout<<"O JUGO DUROU "<<hours<<" HORA(S)"<<endl;}
    return 0;
}