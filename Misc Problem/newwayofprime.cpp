//Let's do this
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool check(int r)
{
    if(r<2) return false;
    for(int t=2;t<=sqrt(r);t++)
    {
        if(r%t==0) return false;
    }
    return true;
}
int main()
{
    int num,j=1;
    cout<<"Give the value of n: ";
    cin>>num;
    int i=2;
    while(j<=num)
    {
        if(check(i)){j++;}
        i++;
    }
    cout<<i-1;
    return 0;
}

