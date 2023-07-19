#include<bits/stdc++.h>
#define endl '\n';
 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    short a;
    cin >> a;
    vector<char> v;
    for(int i=0; i<a; i++)
    {
        char b;
        cin >> b;
        b = tolower(b);
        v.push_back(b);
    }
    
    sort(v.begin(),v.end());
    
    auto size = unique(v.begin(),v.end());
    
    v.erase(size,v.end());
    
    if(v.size() == 26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
 
    return 0;
}
