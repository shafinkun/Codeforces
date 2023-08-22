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

    deque<short> dq(3);
    for(auto &a : dq){
        cin >> a;
    }
    sort(dq.begin() , dq.end());

    short result = dq.at(1) - dq.at(0) + dq.at(2) - dq.at(1);

    cout << result << endl;
    
    return 0;
}