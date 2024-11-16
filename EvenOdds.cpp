#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, num = 0;
    cin >> n >> k;
    if (k > n)
        return 0;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            num = 1;
            if (k == 1)
            {
                cout << num;
            }
            else
            {
                for (int i = 1; i < k; i++)
                {
                    num = num + 2;
                }
                cout << num;
            }
        }
        else
        {
            num = 2;
            k = k - (n / 2);
            if (k == 1)
            {
                cout << num;
            }
            else
            {
                for (int i = 1; i < k; i++)
                {
                    num = num + 2;
                }
                cout << num;
            }
        }
    }
    else
    {
        if (k <= (n / 2) + 1)
        {
            num = 1;
            if (k == 1)
            {
                cout << num;
            }
            else
            {
                for (int i = 1; i < k; i++)
                {
                    num = num + 2;
                }
                cout << num;
            }
        }
        else
        {
            num = 2;
            k = k - (n / 2) - 1;
            if (k == 1)
            {
                cout << num;
                return 0;
            }
            else
            {
                for (int i = 1; i < k; i++)
                {
                    num = num + 2;
                }
                cout << num;
            }
        }
    }
    return 0;
}