//let's do some 2d arrays
//basically it's called matrix
#include<iostream>
using namespace std;
int main()
{
    int matrix[3][3]={{5,7,3},{3,7,1},{6,9,2}};
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
