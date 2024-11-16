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

    short t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;

        if(a == b || a % b == 0){
            cout << 0 << endl;
        }
        else if(b > a){
            cout << b - a << endl;
        }
        else if(a > b)
        {
            int res = a / b;
            cout << (b * (res + 1)) - a << endl;
        }
    }

    return 0;
}