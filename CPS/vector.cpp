#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 5, 2, 8, 6, 9, 8, 7, 2, 4, 3, 5, 2, 2, 3, -1};
    sort(v.begin(), v.end());
    int size = unique(v.begin(), v.end()) - v.begin();

    for (auto i = 0; i < size; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}