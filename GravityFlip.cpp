#include<bits/stdc++.h>
#define endl '\n';

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    
    for(auto u:v){
     cout << u <<" ";
    }
    cout << endl;
    return 0;

}