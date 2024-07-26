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
    
    int t;
    cin >> t;

    int count1 = 0;
    int count2 = 0;
    
    while (t--)
    {
        short a, b;
        cin >> a >> b;

        if (a > b)
        {
            count1++;
        }
        else if (a < b)
        {
            count2++;
        }
        

    }
        if(count1 > count2){
            cout << "Mishka" << endl;
        }
        else if(count1 < count2){
            cout << "Chris" << endl;
        }
        else {
            cout << "Friendship is magic!^^" << endl;
        }

    return 0;
}