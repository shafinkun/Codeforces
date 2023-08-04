#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
        cin.tie(0),               \
        cout.tie(0)
using namespace std;
int main()
{
    optimize();

    int a , b , c;
    cin >> a >> b >> c;
    
    cout << min(a , min(b , c)) << " " << max(a , max(b , c)) << endl;

    return 0;
}