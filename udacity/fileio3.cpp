//here we'll transfer a writing of a string to a file
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string st="my github username is: hasnatshafin01";
    ofstream out("anothersample.txt");
    out<<st;
}