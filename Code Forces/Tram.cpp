#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    int t, current = 0, max = 0;
    cin >> t;
    while(t--){
        int in , out;
        cin >> out >> in;
        current+=(in-out);
        if(current >= max) max = current;
    }
    cout << max <<endl;
    
    return 0;
}