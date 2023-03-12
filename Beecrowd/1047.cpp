#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,hour,min;
    cin>>h1>>m1>>h2>>m2;
    if(h1==0) {h1==24;}
    if(h2==0) {h2==24;}
    if(m2>m1) {min=(m2-m1);
                if(h2>h1) {hour=(h2-h1);
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl; return 0;}
                else if(h1==h2){hour==0;
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl; return 0;}
                else if(h1>h2) {
                    hour=((24+h2)-h1);
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl; return 0;}
                }
    else if(m2<m1){min=((60+m2)-m1); 
                if(h2>h1){h1++; hour=(h2-h1);
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl; return 0;}
                else if(h2<h1){h1++; hour=((24+h2)-h1);
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl; return 0;}
                else if(h1==h2) {h1++; hour=((24+h2)-h1); 
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl; return 0;}
                }
    else if(m2==m1){min==0;
                if(h2>h1){hour=h2-h1;
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E 0 MINUTO(S)"<<endl; return 0;}
                else if(h2<h1){hour=((24+h2)-h1);
                cout<<"O JOGO DUROU "<<hour<<" HORA(S) E 0 MINUTO(S)"<<endl; return 0;}
                else if(h2==h1){
                cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl; return 0;}
                }
    
}