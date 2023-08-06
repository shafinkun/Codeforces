#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;

	bool check = true;
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1 ; j <= c ; j++)
        {
            if(i % 2 != 0) {
                cout << '#' ;
            }
            else {
                if(check)
                {
                    if(j < c) {
                        cout << '.';
                    }
                    else {
                        cout << '#' ;
                        check = false;
                    }
                }
                else
                {
                    if(j == 1) {
                        cout << '#';
                    }
                    
                    else {
                        cout << '.';
                        if(j == c) check = true;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
