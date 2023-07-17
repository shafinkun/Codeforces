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

    int n;
    cin >> n;

    int total = 0;
    while (n--)
    {
        int num;
        cin >> num;
        total =+ num;
    }

    if (total % 4 == 0)
    {
        cout << total / 4 << endl;
    }
    else
    {
        cout << (total / 4) + 1 << endl;
    }

    return 0;
}