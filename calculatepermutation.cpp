//Let's do some math tricks
#include<iostream>
using namespace std;
int factorial(int j)
{
    if(j<=1) return 1;
    else return j*factorial(j-1);
}
int main()
{
    int n,r;
    cout<<"Give the value n: ";
    cin>>n;
    cout<<"Give the value r: ";
    cin>>r;
    if(n>r)
    {cout<<"Permutation of "<<n<<"P"<<r<<" is ";
    cout<<factorial(n)/factorial(n-r)<<endl;}
    else
    {
    cout<<"Try again!!"<<endl;
    cout<<"Give the value n: ";
    cin>>n;
    cout<<"Give the value r: ";
    cin>>r;
    {cout<<"Permutation of "<<n<<"P"<<r<<" is ";
    cout<<factorial(n)/factorial(n-r)<<endl;}
    }
    return 0;
}
