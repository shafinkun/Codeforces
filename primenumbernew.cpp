//let's do in another way
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Input n: ";
    cin>>n;
    bool flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){cout<<n<<" is non prime"<<endl;
        flag=1;
        break;
        }
    }
    if(flag==0){cout<<n<<" is prime";}
    return 0;
}
