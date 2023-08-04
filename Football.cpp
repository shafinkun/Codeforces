#include <bits/stdc++.h>
using namespace std;
int main()
{
    string player;
    cin >> player;

    if (player.size() < 7)
        cout << "NO" << endl;
    else
    {
        int count = 0;
        bool check = false;
        for (int i = 0; i < player.size(); i++)
        {
            if (player[i] == player[i+1])
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count == 6)
            {
                check = true;
                break;
            }
        }
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}