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
        short a, b , c;
        cin >> a >> b >> c;

        if(a==(b+c) || b==(a+c) || c==(a+b)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}