//triangle shape
#include<bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"Input n:";
    std::cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    std::cout<<"\nthis is your pattern!"<<std::endl;
    return 0;
}
