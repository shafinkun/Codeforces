//pattern of rectangle
#include<bits/stdc++.h>
int main()
{
    int row,col;
    std::cout<<"Give row and collumn respectively: ";
    std::cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            std::cout<<"*  ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

