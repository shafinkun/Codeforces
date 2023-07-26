//reverse triangle
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout<<"Input the value of n:";
    cin >> n;

    for(int i = 1;i <= n; i++)
    {
        for(int k = n; k >= i; k--){
            cout << "*";}
            cout << endl;
    }

    return 0;

}
