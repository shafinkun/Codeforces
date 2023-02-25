//Let's do this
#include<iostream>
#include<cmath>
using namespace std;
bool check(int k)
    {
        if(k==0||k==1) return false;
        if(k==2||k==3) return true;
        for(int l=2;l<=sqrt(k);l++)
        {
            if(k%l==0) return false;
        }
        return true;
    }
int main()
{
    int n,m=1,i;
    cout<<"Input n: ";
    cin>>n;
    for(i=2;m<=n;i++)
    {
        if(check(i)){m++;}

    }
    cout<<i-1;
    return 0;
}
