#include<bits/stdc++.h>                                                                                                                                          
    using namespace std;
    int main(){
        int a,b,c,greater;
        cin>>a>>b>>c;
        if(a>b)
        greater=std::max(a,c);
        else 
        greater=std::max(b,c);
        cout<<greater<<endl;
        
        return 0;
    }