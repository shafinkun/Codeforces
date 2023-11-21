#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    long long n;
    cin >> n;
    
    vector<long long> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    long long dif = v[n - 1] - v[0];
    long long l = count(v.begin(), v.end(), v[0]);
    long long k = count(v.begin(), v.end(), v[n - 1]);

    if (v[n - 1] == v[0])
    {
        cout << dif << " " << n * (n - 1) / 2 << endl;
    }
    else
    {
        cout << dif << " " << l * k << endl;
    }

    return 0;
}