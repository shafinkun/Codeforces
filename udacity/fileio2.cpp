    //we'll transfer the wtitings of a file to a string
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string st;
    ifstream in("anothersample.txt");     
    getline(in,st); //the writings of the file is now on the string
    cout<<st<<endl;
    getline(in,st);
    cout<<st<<endl;
    getline(in,st);
    cout<<st<<endl;

}   