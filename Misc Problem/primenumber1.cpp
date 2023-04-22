//code for prime numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int n,i,counter=2;
    cout<<"Input a value:";
    cin>>n;

    for(i=2;i<n;i++)
    {
      if(n%i==0){
        break;
      }
       counter++;
    }

    if(counter==n)
    {
        cout<<n<<" is a prime number!"<<endl;
    }
    else if(counter<n) {
    cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
    getch;
}

