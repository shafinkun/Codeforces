
#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();
    
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        a = pow((a + 1), 2);
        cout << a + 1 << endl;
    }
    return 0;
}