#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, r;
    cin >> m >> n;

    if(m & 1) r = n * (m / 2) + n / 2;
    else r = n * (m / 2);

    cout << r << endl;

    return 0;
}