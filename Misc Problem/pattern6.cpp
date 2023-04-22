//Floyd's triangle
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input n:";
    cin>>n;
    int l=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++){
            cout<<l;
            l++;}
            cout<<endl;
    }
    return 0;
    getch;
}
