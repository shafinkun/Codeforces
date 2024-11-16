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

    int a[n];
    int max = 0;
    int streak = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0 || a[i] >= a[i - 1])
        {
            streak++;
        }
        else
        {
            streak = 1;
        }
        if (streak > max){
            max = streak;
        }
    }
    cout << max << endl;

    return 0;
}