#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("ENTER NO.");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            flag++;
    }
    if(flag==1)
    {
        printf("prime");
    }
    else
        printf("not prime");
}
