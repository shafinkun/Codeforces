//writing to a file
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string st,st1,st2,st3;
    cout<<"Write your name: ";
    cin>>st;
    cout<<"Write your occupation: ";
    cin>>st1;
    cout<<"Write your address: ";
    cin>>st2;
    cout<<"Write your aim[in a single word]: ";
    cin>>st3;
    ofstream hout("anothersample.txt");
    hout<<st<<endl;
    hout<<st1<<endl;
    hout<<st2<<endl;
    hout<<st3;
    return 0;
}