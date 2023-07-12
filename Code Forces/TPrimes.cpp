#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
bool check(long long a);

int main()
{
    optimize();

    int n;
    cin >> n;

    while (n--)
    {
        long long num;
        cin >> num;

        if (num == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        long long root = sqrt(num);
        if (root * root != num)
        {
            cout << "NO" << endl;
        }

        else
        {
            if (check(root))
            {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
bool check(long long a)
{

    int max = sqrt(a);
    for (int i = 2; i <= max; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}