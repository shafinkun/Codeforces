#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = count(s.begin(), s.end(), 'A');
    int d = count(s.begin(), s.end(), 'D');

    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (a == d)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}