#include <bits/stdc++.h>
using namespace std;
bool check(char wo)
{
    if(wo=='a' || wo=='e' || wo=='i' || wo=='o' || wo=='u'){return 0;}
    else {return 1;}
}
int main()
{
    int j,t,count=0;
    string word;
    cin>>t;
    while(t--)
    {
    cin>>j;
    cin>>word;
    if(j<4){cout<<"YES\n";}
    else
    {   
        for(int i=0;i<j;i++)
        {
        if(check(word[i]))
        {
            count++;
            if(count<4){cout<<"YES\n";
                count=0;
                break;}
        }
        else{count=0;}
        }
    if(count>=4){cout<<"NO\n";
    count=0;}
    }
    }
}

