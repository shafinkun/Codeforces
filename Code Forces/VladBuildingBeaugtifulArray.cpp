//this is your first but not last beautiful cunning logical code!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min = INT_MAX;
        bool check = true;
        cin >> n;
        long long num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[i] < min)
            {
                min = num[i];
            }
        }
        if (min % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (min == num[i])
                {
                    continue;
                }
                else if ((num[i] - min) % 2 != 0)
                {
                    check = false;
                    break;
                }
            }
        }

        if (check)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}