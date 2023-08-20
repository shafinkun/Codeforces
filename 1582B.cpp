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

    while(t--)
    {
        short n;
        cin >> n;
        deque<int> l(n);

        for(auto &a : l)
        {
            cin >> a;
        }

        int zero = count(l.begin() , l.end() , 0);
        int one = count(l.begin() , l.end() , 1);

        int result = zero * one;

        cout << (1ll << zero) * (ll)one << endl;
    }

    return 0;
}