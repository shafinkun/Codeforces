#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int S = 0, D = 0;
    bool check = true;
    

    while (n--)
    {

        if (v[0] > v.back())
        {
            if (check)
            {
                S += v[0];
                v.erase(v.begin());
                check = false;
            }
            else
            {
                D += v[0];
                v.erase(v.begin());
                check = true;
            }
        }
        else
        {
            if (check)
            {
                S += v.back();
                v.pop_back();
                check = false;
            }
            else
            {
                D += v.back();
                v.pop_back();
                check = true;
            }
        }
    }
    cout << S << " " << D;
    return 0;
}