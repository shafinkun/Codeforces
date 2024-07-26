#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.size() / 2;
        bool check = false;
        for (int i = 0, j = 1; i < size - 1, j < size; i++, j++)
        {
            if (s[i] != s[j])
            {
                check = true;
                break;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}