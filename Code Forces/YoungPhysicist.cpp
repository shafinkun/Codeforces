#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a = 0, b = 0, c = 0;
    int a1 = 0, b1 = 0, c1 = 0;
    while (t--)
    {
        cin >> a1;
        cin >> b1;
        cin >> c1;
        a = a + a1;
        b = b + b1;
        c = c + c1;
    }
    if (a == 0 && b == 0 && c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}