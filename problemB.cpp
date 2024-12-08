/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/gym/451321/problem/B
// Inqilab Zindabad!!!
#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    // check for akash
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'k')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'a')
                        {
                            for (int l = k + 1; l < n; l++)
                            {
                                if (s[l] == 's')
                                {
                                    for (int m = l + 1; m < n; m++)
                                    {
                                        if (s[m] == 'h')
                                        {
                                            cout << "Arigato akash vai" << endl;
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    // check for apon
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'p')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'o')
                        {
                            for (int l = k + 1; l < n; l++)
                            {
                                if (s[l] == 'n')
                                {
                                    cout << "Arigato apon vai" << endl;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // check for abubakar
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'b')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'u')
                        {
                            for (int l = k + 1; l < n; l++)
                            {
                                if (s[l] == 'b')
                                {
                                    for (int m = l + 1; m < n; m++)
                                    {
                                        if (s[m] == 'a')
                                        {
                                            for (int o = m + 1; o < n; o++)
                                            {
                                                if (s[o] == 'k')
                                                {
                                                    for (int p = o + 1; p < n; p++)
                                                    {
                                                        if (s[p] == 'a')
                                                        {
                                                            for (int q = p + 1; q < n; q++)
                                                            {
                                                                if (s[q] == 'r')
                                                                {
                                                                    cout << "Arigato abubakar vai" << endl;
                                                                    return;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // check for evan
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'e')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'v')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'a')
                        {
                            for (int l = k + 1; l < n; l++)
                            {
                                if (s[l] == 'n')
                                {
                                    cout << "Arigato evan vai" << endl;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // check for zahid
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'a')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'h')
                        {
                            for (int l = k + 1; l < n; l++)
                            {
                                if (s[l] == 'i')
                                {
                                    for (int m = l + 1; m < n; m++)
                                    {
                                        if (s[m] == 'd')
                                        {
                                            cout << "Arigato zahid vai" << endl;
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // check for rafi
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'r')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == 'a')
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'f')
                        {
                            for (int l = k + 1; l < n; l++)
                            {
                                if (s[l] == 'i')
                                {
                                    cout << "Arigato rafi vai" << endl;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "TakaDen" << endl;
    return;
}

signed main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}