//pattern of rectangle
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Give row and collumn respectively: ";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

