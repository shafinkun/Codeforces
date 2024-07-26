#include <bits/stdc++.h>
#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0), \
        cin.tie(0),               \
        cout.tie(0)
using namespace std;

int main()
{
    optimize();

    string s;
    cin >> s;
    int n;
    cin >> n;
    map<int, string> mp = {{0, "January"}, {1, "February"}, {2, "March"}, {3, "April"}, {4, "May"}, {5, "June"}, {6, "July"}, {7, "August"}, {8, "September"}, {9, "October"}, {10, "November"}, {11, "December"}};
    map<string, int> mp2 = {{"January", 0}, {"February", 1}, {"March", 2}, {"April", 3}, {"May", 4}, {"June", 5}, {"July", 6}, {"August", 7}, {"September", 8}, {"October", 9}, {"November", 10}, {"December", 11}};
    int m = mp2[s];
    int ans = (m + n) % 12;
    cout << mp[ans] << endl;

    return 0;
    
}