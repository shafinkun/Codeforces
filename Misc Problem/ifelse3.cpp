//even odd numbers
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int a;
    cout<<"Input an positive integer:";
    cin>>a;
    if(a % 2 == 0)
    {
        cout << a <<" is even"<< endl;
    }
    else
    {
        cout << a <<" is odd"<< endl;
    }

    return 0;
}
