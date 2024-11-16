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

    string s1 , s2 , s3;
    cin >> s1 >> s2 >> s3;

    s1 = s1 + s2;

    deque<char> dq1 , dq2;
    for(int i = 0; i < s1.size(); ++i)
        dq1.push_back(s1[i]);

    sort(dq1.begin() , dq1.end());

    for(int i = 0; i < s3.size(); ++i)
        dq2.push_back(s3[i]);

    sort(dq2.begin() , dq2.end());

    if(dq1 == dq2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    return 0;  
}