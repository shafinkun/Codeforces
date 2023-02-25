#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Input a three digit number: ";
    cin>>n;
    int original=n, finalresult=0;
    while(original>0)
    {
        int remainder=original%10;
        int result=original/10;
         finalresult=finalresult+pow(remainder,3);
         original=result;

    }
    if(finalresult==n){cout<<n<<" is an armstrong";}
    else{cout<<n<<" is not an armstrong";}
    return 0;
}
