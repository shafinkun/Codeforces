#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();

    int a , b , c;
    cin >> a >> b >> c;

    if(a != 1 && b != 1 && c != 1){
        cout << a*b*c << endl;
    }
    else {
        if(a==b==c==1){
            cout << 3 << endl;
        }
        else if(a==c==1 && b!=1)
        {
            cout << a+b+c <<endl;
        }

        else if(((a+b)*c) >= (a*(b+c)))
        {
            cout << (a+b)*c << endl;
        }
        else {
            cout << a*(b+c) << endl;
        }
        
    }

    return 0;
}