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

    int b, n;
    string s;
    cin >> s >> b >> n;

    int newlast = -1;
    for (int i = 0; n > 0; i++)
    {

        s += to_string(i);
        int z = stoi(s);
        if (z % b == 0)
        {
            int last = i;
            if (last == newlast)
            {
                cout << s;
                n--;
                while (n--)
                {
                    cout << i;
                }
                cout << endl;
                return 0;
            }
            else
            {
                newlast = i;
                i = -1;
                n--;
            }
        }
        else
        {
            s.pop_back();
            if (i == 9)
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << s << endl;

    return 0;
}