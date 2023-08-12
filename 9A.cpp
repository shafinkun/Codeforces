#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;

    if(a == 1 && b == 1)
    {
        cout << "1/1" << endl;
        return 0;
    }
    if(a == 6 && b == 6)
    {
        cout << "1/6" << endl;
        return 0;
    }
    if(a > b)
    {
        int x = 6 - a + 1;
        int y = 6;
        int gcd = __gcd(x , y);
        cout << x / gcd << "/" << y / gcd << endl;
    }
    else
    {
        int x = 6 - b + 1;
        int y = 6;
        int gcd = __gcd(x , y);
        cout << x / gcd << "/" << y / gcd << endl;
    }


    return 0;
}