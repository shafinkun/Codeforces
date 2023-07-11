#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
bool check(int a);

int main()
{
    optimize();

    int n;
    cin >> n;

    while (n--)
    {
        long long int num;
        cin >> num;

        long double root = sqrt(num);
        if(check(root)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}
bool check(long double a){

    int max = sqrt(a);
    for(int i = 2; i <= max ; i++)
    {
        if((int)a % i == 0){
            return false;
        }
    }
    return true;
}