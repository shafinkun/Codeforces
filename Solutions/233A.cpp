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

    bool flag = true;
    if(n % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }
    else{
        for(int i = 1; i <= n; i++) {
            if(flag) {
                cout << i + 1 << " ";
                flag = false;
            }
            else{
                cout << i - 1 << " ";
                flag = true;
            }
        }
    }

    return 0;
}