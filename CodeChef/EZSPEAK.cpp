#include <bits/stdc++.h>
using namespace std;
bool check(char a){
    if(a!='a' && a!='e' && a!='i' &&a!='o' && a!='u'){return 1;}
    else {return 0;}
}
int main()
{
    int j,t;
    char word[j];
    cin>>t;
    while(t)
    {
    cin>>j;
    cin>>word;          
    if(j<=3){cout<<"YES\n";}
    else if(j>=4)
    {   
        int count=0;
        for(int i=0;i<j;i++)
        {
        if(check(word[i]))
        {
            count++;
            if(count>=4){cout<<"NO\n";
            break;}
        }
        else{count=0;}
        }
    if(count<4){cout<<"YES\n";}
    t--;
    }
    }
    return 0;
}