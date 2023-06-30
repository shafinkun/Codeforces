//input name//
/*asking for name
and welcoming him/her to the world of programming*/

#include<bits/stdc++.h>
#define endl '\n';

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char ch[10];
    cout<<"What's your name?\n";
    cin>>ch;
    cout<<"\tHello "<<ch<<"! Welcome to the   programming world!";
    return 0;
}
