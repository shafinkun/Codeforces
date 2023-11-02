#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    vector<int> v;
    for (int i = 0; i <= 10; i++)
    {
        int x = (1 << i);
        v.push_back(x);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if (ar[i + 1] < ar[i] && find(v.begin(), v.end(), (i + 1)) == v.end())
            {
                flag = false;
                break;
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
    }

    return 0;
}