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

    int n;
    cin >> n;
    
    if(n<=2){
        cout << 1 << endl;
    }
    
    else {
        if(n % 2 == 0 && n % 4 == 0 && n % 3 != 0 && n % 10 != 0)
        {
            cout << 1 << endl;
        }
        else{
            int count = 0;
            if(n % 2 != 0){
                n--;
                count++;
            }
            while(n = n/ 2)
            {
                if(n % 2 != 0){
                    n--;
                    count++;
                }
            }

            cout << count << endl;
        }
    }

    return 0;
}