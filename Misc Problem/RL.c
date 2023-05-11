#include<stdio.h>
int main()
{
    int i,j,n,k,x;
    char arr[n],all[n+1];
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
       
        scanf("%c",&arr[i]);
        if(arr[i]=='R')
        {
            x++;

        }
        else if(arr[i]=='L')
        {
            x--;

        }
        all[i]=x;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",all[i]);
        // for(j=i+1;j<n+1;j++)
        // {
        //     if(all[i]==all[j])
        //     {
        //         for(k=j;k<n+1;k++)
        //         {
        //             all[k]=all[k+1];
                    
        //         }
        //     }
        // }
    }

    

    return 0;
}