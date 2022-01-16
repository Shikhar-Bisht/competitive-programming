#include<stdio.h>
int main()
{
    int i,j,n,rem=0,rev=0;
    printf("ENTER THE NO.");
    scanf("%d",&n);
    int m=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(m==rev)
        printf("palindrome");
    else
        printf("not palindrome");
}