#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sec,min,hr;
    cin>>x;
    sec=x%60;
    x=x/60;
    min=x%60;
    hr=x/60;
    cout<<hr<<":"<<min<<":"<<sec<<endl;
    return 0;
}