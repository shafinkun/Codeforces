#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Give the number: ";
    cin>>n;
    while(n>0)
    {
        x=n%10;
        cout<<x;
        n=n/10;
    }
    return 0;

}
