#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int num,i;
    cout<<"Enter the number of term: ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}
