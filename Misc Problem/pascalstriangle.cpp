//Pascal's Triangle
#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        int damn=1;
        for(int j=n;j>i;j--)
        {
            std::cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            std::cout<<damn<<" ";
            damn=damn*(i-k)/k;

        }
        std::cout<<std::endl;
    }
    return 0;
}
