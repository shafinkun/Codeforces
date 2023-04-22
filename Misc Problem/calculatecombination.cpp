#include<iostream>
using namespace std;
int factorial(int i);
int main()
{
    int n,r;
    cout<<"Give the value of n :";
    cin>>n;
    cout<<"Give the value of r :";
    cin>>r;
    if(n>r)
    {
        cout<<"The combination "<<n<<"P"<<r<<" is: "<<factorial(n)/(factorial(n-r)*factorial(r))<<endl;
    }
    else{
            cout<<"n Must be larger than r"<<endl;
            cout<<"Give the value of n :";
            cin>>n;
            cout<<"Give the value of r :";
            cin>>r;
            cout<<"The combination "<<n<<"P"<<r<<" is: "<<factorial(n)/(factorial(n-r)*factorial(r))<<endl;
        }
    return 0;

}
int factorial(int i)
{
    if(i<=1) return 1;
    return i*factorial(i-1);
}
