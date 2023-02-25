//Let's recall it again
//Remember the starting was never smooth
#include<iostream>
#include<cmath>
using namespace std;
int digit(int n)
{
    int m=0;
    while(n>0)
    {
       n=n/10;
       m++;
    }
    return m;
}
int main()
{
    int n,r,sum=0,real_n,j;
    cout<<"Input a number: ";
    cin>>n;
    real_n=n;
    j=digit(real_n);
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,j);
        n=n/10;
    }
    if(sum==real_n){cout<<"Number is Armstrong";}
    else{cout<<"Number is not Armstrong";}
    return 0;
}
