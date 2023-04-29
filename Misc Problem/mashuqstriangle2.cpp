#include<bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"Value of a of the triangle: ";
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {std::cout<<" ";}
            for(int k=2*i;k>1;k--)
            {
                if(i==n)std::cout<<0;
                else if(k==2*i||k==2)std::cout<<0;
                else std::cout<<1;
            }
        std::cout<<std::endl;
    }
}