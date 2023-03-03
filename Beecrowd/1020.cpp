#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int day,mon,yr,tempx;
    yr=x/365;
    mon=(x%365)/30;
    day=(x%365)%30;
    cout<<yr<<" ano(s)"<<endl;
    cout<<mon<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;
    return 0;

}