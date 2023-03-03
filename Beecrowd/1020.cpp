#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int day,mon,yr,tempx;
    day=x%30;
    tempx=x/30;
    yr=tempx/12;
    mon=tempx%12;
    cout<<yr<<" ano(s)"<<endl;
    cout<<mon<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;
    return 0;

}