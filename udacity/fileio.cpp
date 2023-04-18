#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string st="This is Shafin Ahmed!";
    //Declare a file
    ofstream out("sample1.txt");
    out<<st;
    string st2;
    ifstream in("sample2.txt");
    getline(in,st2);
    cout<<st2<<endl;
    getline(in,st2);
    cout<<st2;
    return 0;
}