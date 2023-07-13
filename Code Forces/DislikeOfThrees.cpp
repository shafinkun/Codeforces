#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();

    int count = 0;

    vector<int> v;
    for (int i = 1; count <= 1000; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            v.push_back(i);
            count++;
        }
    }

    short t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        cout << v[a - 1] << endl;
    }

    return 0;
}