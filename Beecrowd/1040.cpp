#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n1,n2,n3,n4,avr,score;
    cin>>n1>>n2>>n3>>n4;
    avr=(n1*2+n2*3+n3*4+n4*1)/10;
    cout<<fixed<<setprecision(1);
    cout<<"Media: "<<avr<<endl;
    if(avr>=7.0) {cout<<"Aluno aprovado."<<endl; 
    return 0;}
    if(avr<5.0) {cout<<"Aluno reprovado."<<endl;
    return 0;}
    if(5<avr && avr<6.9)
            {cout<<"Aluno em exame."<<endl;
            cin>>score;
            cout<<"Nota do exame: "<<score<<endl;
            avr=(score+avr)/2;
            if(avr>=5.0) cout<<"Aluno aprovado."<<endl<<"Media final: "<<avr<<endl; return 0;
            if(avr<=4.9) cout<<"Aluno reprovado."<<endl<<"Media final: "<<avr<<endl; return 0;
            }

}