#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>fixed>>setprecision(1);
    cin>>x>>y;
    if(x+y==0){cout<<"Origem"<<endl;
                return 0;}
    if(x==0){cout<<"Eixo X"<<endl;
                return 0;} 
    if(y==0){cout<<"Eixo Y"<<endl;
                return 0;}            
    if(x>0&&y>0){cout<<"Q1"<<endl;
                return 0;} 
    if(x>0&&y<0){cout<<"Q4"<<endl;
                return 0;} 
    if(x<0&&y>0){cout<<"Q2"<<endl;
                return 0;} 
    if(x<0&&y<0){cout<<"Q3"<<endl;
                return 0;}                                 
}