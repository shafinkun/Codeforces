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
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s = to_string(n);
        int len = s.size() - 1;
        int ans = n - pow(10, len);

        cout << ans << endl;
    }
    

    return 0;
}