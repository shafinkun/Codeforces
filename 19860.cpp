#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int a[3] = {x1, x2, x3};
        sort(a, a + 3);
        int totalDistance = abs(a[1] - a[0]) + abs(a[1] - a[2]);
        cout << totalDistance << endl;
    }
    return 0;
}