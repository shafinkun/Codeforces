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
    short t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int cnt = 0; 
        while(n--)
        {
            int a , b;
            cin >> a >> b;
            if(a > b) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}