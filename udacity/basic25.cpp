#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    cout<<"Using setw(15)\n";
    cout<<a<<setw(15)<<b<<setw(15)<<c<<"\n";
    cout<<aa<<setw(15)<<bb<<setw(15)<<cc<<"\n";
    cout<<aaa<<setw(15)<<bbb<<setw(15)<<ccc<<"\n\n";
    cout<<"Using tab\n";
    cout<<a<<"\t"<<b<<"\t\t"<<c<<"\n";
    cout<<aa<<"\t"<<bb<<"\t\t"<<cc<<"\n";
    cout<<aaa<<"\t"<<bbb<<"\t\t"<<ccc<<"\n";
    return 0;
}