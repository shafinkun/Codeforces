#include<stdio.h>
int main()
{
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(n==sum)
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}
