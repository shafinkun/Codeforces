#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main(){
    optimize();

    int n;
    cin >> n;

    set<int> s;
    while(n--){
        int a;
        cin >> a;
        s.insert(a);
    }

    if(s.size() == 1){
        cout << "NO" << endl;
        return 0;
    }

    auto i = ++s.begin();

    cout << *i << endl;

    return 0;
}