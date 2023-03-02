#include<bits/stdc++.h>
#include<iomanip>
    using namespace std;

    int main()
    {
        int R;
        double res;
        cin>>R;
        double x = pow(R,3);
        res=((4.0/3)*3.14159*x);
        cout<<fixed;
        cout<<setprecision(3)<<"VOLUME = "<<res<<endl;    
        return 0;
     }          