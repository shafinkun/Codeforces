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

    short n , k , l , c ,d , p , nl , np; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    short totML = k * l;
    short totLime = c * d;

    short toast = totML / nl;

    if(toast > totLime) {
        toast = totLime;
    }

    if(toast * np  > p){
        toast = p;
    }

    cout << toast << endl;

    return 0;
}