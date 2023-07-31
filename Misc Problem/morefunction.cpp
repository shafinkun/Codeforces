//Print prime number between two numbers
#include<bits/stdc++.h>
using namespace std;

bool check(int n);
int main()
{
    int n1,n2;
    cout<<"Numbers between: "<<endl;
    cin>>n1>>n2;
    for(int i = n1 ; i <= n2 ; i++)
    {
        if(check(i)){cout<<i<<" ";}
    }
    return 0;
}

bool check(int n)
{
    if(n==0 || n==1) return false;
    for(int j = 2 ; j < n ; j++)
    {
        if(n % j == 0) return false;
    }
    return true;
}
