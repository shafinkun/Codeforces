//reverse a number
#include <iostream>
int main()
{
    int n,x;
    std::cout<<"Give the number: ";
    std::cin>>n;
    while(n>0)
    {
        x=n%10;
        std::cout<<x;
        n=n/10;
    }
    return 0;

}
