#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, n, w;
    cin >> k >> n >> w;

    long long r = k * w * (w + 1) / 2;

    if (r <= n)
        cout << 0 << endl;

    else
        cout << r - n << endl;

    return 0;
}