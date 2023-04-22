//inverted pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n+1-i;k++){      //there is an another way to do
                                        //you know how it is
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
    getch;
}
