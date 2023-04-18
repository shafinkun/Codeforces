#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string st;
    cout<<"Write your name: ";
    cin>>st;
    ofstream hout("anothersample.txt");
    hout<<st;
}