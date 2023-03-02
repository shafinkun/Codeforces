#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,diff;
    cin>>x1>>y1;
    cin>>x2>>y2;
    double a=x2-x1;
    double b=y2-y1;
    diff=sqrt(pow(a,2)+pow(b,2));
    cout<<fixed<<setprecision(4);
    cout<<diff<<endl;
    return 0;
}