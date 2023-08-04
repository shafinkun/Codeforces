#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
    cin.tie(0),                 \
    cout.tie(0)
using namespace std;

int main()
{
    
    optimize();

    int k, r;
    cin >> k >> r;
    
    if(k % 10 == 0 || (k - r) % 10 == 0)
    {
        cout << 1 << endl;
    }
    else{
        int i = 2;
        while(true)
        {
            if((k * i) % 10 == 0 || ((k * i) - r) % 10 == 0)
            {
                cout << i << endl;
                break;
            }
            i++;
        }
    }

    return 0;

}