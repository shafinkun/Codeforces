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

    unsigned long long n;
    cin >> n;

    if(n % 2 == 0){
        cout << n / 2 << endl;
    }
    else{
        long long result = 1 + n /2;
        cout << (-1)*result << endl;
    }

    return 0;  

}