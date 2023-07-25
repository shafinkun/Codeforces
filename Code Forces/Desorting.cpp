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
    short t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool check = true;

        long long v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                continue;
            }
            else if (v[i] < v[i - 1])
            {
                check = false;
            }
        }

        if (check == false)
        {
            cout << 0 << endl;
        }
        else
        {
            long long bLast = v[n - 2] , Last = v[n -1];
            if(bLast == Last){
                cout << 1 << endl;
                continue;
            }
            long long avg = (int)(Last + bLast )/ 2 + 1;

            cout << (long long)(avg - bLast)<< endl;
        }
    }

    return 0;
}