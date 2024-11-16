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
    int n , h;
    cin >> n >> h;

    int num[n], count=0;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        if(num[i] > h){
             count+=2;
        }
        else {
            count++;
        }
    }

    cout << count << endl;

    return 0;

}