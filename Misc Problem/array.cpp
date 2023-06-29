//let's do the array
#include<bits/stdc++.h>
#define endl '\n';

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //let's do a result card showing average score of 10 students
    int student[9];
    int n=0, sum=0;
    while(n<10){
        cout<<"Number of student "<<n+1<<" : ";
        cin>>student[n];
        sum=sum+student[n];
        n++;
    }
    int maximum=student[0];
    int lowest=student[0];
    for(int i=1;i<10;i++)
    {
            if(student[i]>maximum){maximum=student[i];}

            if(student[i]<lowest){lowest=student[i];}

    }
    cout<<"Total number is: "<<sum<<endl;
    cout<<"Average number is: "<<(float)sum/10<<endl;
    cout<<"Highest number is: "<<maximum<<endl;
    cout<<"Minimum number is: "<<lowest<<endl;
    return 0;
}
