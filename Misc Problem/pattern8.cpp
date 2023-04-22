//hollowed rectangle
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Input row and col:";
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int k=1;k<=col;k++){
            if(i==1||i==row||k==1||k==col){
                cout<<"*";
            }
            else{cout<<" ";};
        }
        cout<<endl;
    }
    return 0;
    getch;
}
