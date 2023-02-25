//Reversing number again in my way
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input n: ";
    cin>>n;
    int resultant=n;
    while(resultant>0){
        int last_num=n%10;
            resultant=resultant/10;
        cout<<last_num;
        n=resultant;

    }
    return 0;
}
