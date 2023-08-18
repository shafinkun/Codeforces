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
    optimize();
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cnt25 = 0, cnt50 = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            cnt25++;
        }
        else if (a[i] == 50)
        {
            if (cnt25 > 0)
            {
                cnt25--;
                cnt50++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (a[i] == 100)
        {
            if (cnt50 > 0 && cnt25 > 0)
            {
                cnt50--;
                cnt25--;
            }
            else if (cnt25 >= 3)
            {
                cnt25 -= 3;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}