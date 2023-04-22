//rhomboss pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for( i=1;i<=n;i++){

            for( int f=n-i;f>=1;f--){
                        cout<<" ";}
            for(int k=1;k<=n;k++){
                cout<<"* ";
            }
            cout<<endl;
    }
    return 0;
    getch;
}
