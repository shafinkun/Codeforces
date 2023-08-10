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
    short t;
    cin >> t;

    while (t--)
    {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        while (x1.at(x1.size() - 1) == '0')
        {
            p1++;
            x1.pop_back();
        }
        while (x2.at(x2.size() - 1) == '0')
        {
            p2++;
            x2.pop_back();
        }
        if (x1 == x2 && p1 == p2)
        {
            cout << "=" << endl;
            continue;
        }
        else if((ull)(x1.size() + p1) > (ull)(x2.size() + p2))
        {
            cout << ">" << endl;
            continue;
        }
        else if((ull)(x1.size() + p1) < (ull)(x2.size() + p2))
        {
            cout << "<" << endl;
            continue;
        }
        else{
            if(x1 > x2){
                cout << ">" << endl;
            }
            else{
                cout << "<" << endl;
            }
        }
    }

    return 0;
}