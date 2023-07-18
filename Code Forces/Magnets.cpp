#include<bits/stdc++.h>
#define endl '\n';
 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<int> v;
 
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    int n1= unique(v.begin(),v.end())-v.begin();
 
    v.erase(v.begin()+n1,v.end());
    
    cout << v.size() << endl;
    return 0;
}