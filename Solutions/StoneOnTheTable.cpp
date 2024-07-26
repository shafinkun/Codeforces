#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    vector <char> color;
    for(int i=0; i<n; i++){
        char a;
        cin>>a;
        color.push_back(a);
    }
    
    for(int i=0; i<n; i++){
        if(color[i] == color[i+1]) count++;
    }

    cout << count <<endl;

    return 0;
}