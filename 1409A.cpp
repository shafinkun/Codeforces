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

    short t;
    cin >> t;

    while(t--) {
        int a, b, result;
        cin >> a >> b;
        if(a > b) {
            result = a - b;
            if(result % 10 == 0) {
                cout << result / 10 << endl;
            }
            else {
                cout << result / 10 + 1 << endl;
            }
        }

        else if(a < b) {
            result = b - a;
            if(result % 10 == 0) {
                cout << result / 10 << endl;
            }
            else {
                cout << result / 10 + 1 << endl;
            }
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}