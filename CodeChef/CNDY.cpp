#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = 2 * n;
        int arr[n];
        int arr2[n];
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];  
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; i < n; j++)
            {
                if (arr2[i] == arr[j])
                {
                    check = false;
                    break;
                }
            }  
        }

        if (check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}