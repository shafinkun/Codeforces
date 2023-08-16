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

    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    int b[3][3];
    b[0][0] = a[0][0] + a[0][1] + a[1][0];
    b[0][1] = a[0][0] + a[0][1] + a[0][2] + a[1][1];
    b[0][2] = a[0][1] + a[0][2] + a[1][2];
    b[1][0] = a[0][0] + a[1][0] + a[1][1] + a[2][0];
    b[1][1] = a[0][1] + a[1][0] + a[1][1] + a[1][2] + a[2][1];
    b[1][2] = a[0][2] + a[1][1] + a[1][2] + a[2][2];
    b[2][0] = a[1][0] + a[2][0] + a[2][1];
    b[2][1] = a[1][1] + a[2][0] + a[2][1] + a[2][2];
    b[2][2] = a[1][2] + a[2][1] + a[2][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (b[i][j] % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}