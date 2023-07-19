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

    short t;
    cin >> t;
    while (t--)
    {
        bool check = true;
        int count = 0;
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            int a;
            cin >> a;

            if(check){
                if(a % 2 != 0){
                    count++;
                }
                check = false;
            }
            else{
                if(a % 2 == 0){
                    count++;
                }
                check = true;
            }
        }

        if(count % 2 == 0){
            count /= 2;
            cout << count << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}