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

    int n;
    cin >> n; 

    vector<int> v;
    for(int i = 0; i  < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int one = count(v.begin(),v.end(),1);
    int two = count(v.begin(),v.end(),2);
    int three = count(v.begin(),v.end(),3);
    int four = count(v.begin(),v.end(),4);
    
    int car = four + three;

    if(three >= one){
        one = 0;
    }
    else{
        one -= three;
    }

    two *= 2;
    int num = 0;
    if((two + one) % 4 == 0){
        num = (two + one) / 4;
    }
    else{
        num = ((two + one) / 4) + 1;
    }

    cout << car + num << endl;

    return 0;
}