//Let's make a series of prime numbers
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Give a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=2;j<=n/2;j++)
        {
            if(i%j==0){count++;
            break;}
            if(count==0&&n!=1){cout<<i;}
            return 0;
        }
    }
}
