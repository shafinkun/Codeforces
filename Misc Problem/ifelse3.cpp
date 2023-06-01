//even odd numbers
#include<bits/stdc++.h>
int main()
{
    int a;
    std::cout<<"Input an positive integer:";
    std::cin>>a;
    if(a%2==0)
    {
        std::cout<<a<<" is even";
    }
    else{std::cout<<a<<" is odd";}
    return 0;
}
