//Let's do it again
#include<iostream>
using namespace std;
bool check(int n)
{
    if(n==1 && n==0) return false;
    if(n==2) return true;
    for(int j=2;j<n;j++)
    {
        if(n%j==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Input a number ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(check(i)){cout<<i<<" ";}
    }
    return 0;
}
