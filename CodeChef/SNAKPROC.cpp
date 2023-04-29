/*6
18
..H..T...HTH....T.
3
...
10
H..H..T..T
2
HT
11
.T...H..H.T
7
H..T..H
*/


#include<bits/stdc++.h>
using namespace std;                    
int main()
{
    int t,n,m=0;
    string s,sr;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='.'){sr+=s[i];}
        }
        int b=sr.length();
        if(b==0) cout<<"Valid\n";
        else if(b%2==0)
        {
            for(int i=0,j=1;i<b,j<b;i=i+2,j=j+2){
                    if(j==b-1) { break;}
                    if((sr[i]==sr[i+2]=='H') && (sr[j]==sr[j+2]=='T')) {m=1;}}
        }
        else if(b%2!=0) cout<<"Invalid\n";    
        if(m==1) cout<<"Valid\n";
        else if(m==0) ;cout<<"Invalid\n";
    }

    return 0;
}