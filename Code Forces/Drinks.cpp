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
    int n;
    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        total+=a; 
    }

    double final = ((1.0)*total / n);
    // cout << fixed << setprecision(12) << final << endl;
    printf("%.012lf\n", final);


    return 0;
}