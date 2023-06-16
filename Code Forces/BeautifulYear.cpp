#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
bool check(int num)
{
    string s;
    s = to_string(num);
    int size = s.size();
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (s[i] == s[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int year;
    cin >> year;

    year++;
    if (check(year))
    {
        cout << year << endl;
        return 0;
    }
    while (check(year) == 0)
    {
        year++;
        if (check(year))
        {
            cout << year << endl;
        }
    }
}