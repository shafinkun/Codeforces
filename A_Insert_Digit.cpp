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

    int t;
    cin >> t;
    
    while(t--)
    {
        int n , d;
        cin >> n >> d;

        string s;
        cin >> s;

        int cnt = 0 , mn = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] >= d + '0')
            {
                cnt = 0;
                mn = 0;
            }
            else
            {
                cnt++;
                if(cnt == d)
                {
                    cnt = 0;
                    mn++;
                }
            }
        }
    }

}
