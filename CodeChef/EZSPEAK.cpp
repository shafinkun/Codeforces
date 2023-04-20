#include <bits/stdc++.h>
using namespace std;
bool check(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    return 0;
    else 
    return 1;
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
    if(j<4){cout<<"YES\n";}
    else if(j>3)
    {for(int i=0;i<j;i++)
        {
        if(check(word[i])&&check(word[i+1])&&check(word[i+2])&&check(word[i+3]))
        {cout<<"NO\n";}
        }
    cout<<"YES\n";
    t--;}
    }
    return 0;
}