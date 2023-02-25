//hollowed shape
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"input row and collum respectivly:";
    cin>>row>>col;

    for(int i=1;i<=row;i++){
            for(int h=1;h<=col;h++){
                if(i==1 || i==row){cout<<"*";}
                else if(h==1 || h==col){cout<<"*";}
                else{cout<<"";}
            }

    } cout<<endl;

    return 0;
    getch;
}
