#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, person, valids = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> person;

        if (person + k <= 5)
        {
            valids++;
        }
    }

    cout << (int)(valids / 3) << endl;

    return 0;
}