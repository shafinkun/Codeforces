#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a,r1,r2;
    cin >> n >> m >> a;
    if (n <= a)
    {
        r1 = 1;
    }
    else if (n > a)
    {
        if (n % a == 0)
        {
            r1 = n / a;
        }
        else
        {
            r1 = (n / a) + 1;
        }
    }
    
    if (m <= a)
    {
        r2 = 1;
    }
    else if (m > a)
    {

        if (m % a == 0)
        {
            r2 = m / a;
        }
        else
        {
            r2 = (m / a) + 1;
        }
    }
    cout << r1 * r2;

    return 0;
}