#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    //print the wtitings of a file
    string st;
    ifstream in("anothersample.txt");     
    getline(in,st); //the writings of the file is now on the string
    cout<<st<<endl;
    getline(in,st);
    cout<<st<<endl;
    getline(in,st);
    cout<<st<<endl;

}   