#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s = to_string(n);
    int four = count(s.begin(),s.end(),'4');
    int seven = count(s.begin(),s.end(),'7');
    if(seven + four == 4 || seven + four == 7) cout<<"YES";
    else cout<<"NO";

    return 0;
}