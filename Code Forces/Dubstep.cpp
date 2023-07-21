#include<bits/stdc++.h>
#define endl '\n';

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vector<char> v;

    for(int i=0; i < s.size(); i++)
    {
        if(s[i] == 'W') {
            if(s[i+1] =='U' && s[i+2] =='B')
            {
                char a = ' ';
                if(!v.empty() && v[v.size()-1]!=' ') {
                    v.push_back(a);
                    continue;
                }
            }
            else {
                v.push_back(s[i]);
            }
        }
        else if(s[i] == 'U') {
            if(s[i-1] == 'W'&&s[i+1]=='B') {
                continue;
            }
            else {
                v.push_back(s[i]);
            }
        }
        else if(s[i]=='B') {
            if(s[i-1]=='U'&&s[i-2]=='W') {
                continue;
            }
            else {
                v.push_back(s[i]);
            }
        }
        else {
            v.push_back(s[i]);
        }
    }

    for(auto u:v) cout << u;
    cout << endl;

    return 0;
}