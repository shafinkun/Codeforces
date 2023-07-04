#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    optimize();

    int num;
    cin >> num;

    if (num >= 0)
    {
        cout << num << endl;
    }
    else
    {
        num = num * (-1);
        string s = to_string(num);
        int size = s.size();
        
        if(size == 1){
            cout << 0 << endl;
            return 0;
        }

        if(s[size-1] >= s[size-2]){
            s[size-1] = '\0';
            int n = stoi(s);
            n = n * (-1);
            cout << n << endl;
        }
        else{
            s[size-2] = s[size-1];
            s[size-1] = '\0';
            int n = stoi(s);
            n = n * (-1);
            cout << n << endl;
        }

    }

    return 0;
}