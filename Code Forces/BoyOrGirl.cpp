#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int count = 0;
    for (int i = 0; i < name.size(); i++)
    {
        for (int j = i + 1; j < name.size(); j++)
        {
            if (name[i] == name[j])
            {
                count++;
            }
        }
    }
    if ((name.size() - count) % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}