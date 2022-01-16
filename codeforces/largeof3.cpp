#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THREE NO.S");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
    {

            printf("%d  IS GREATEST",a);
    }
    else if(b>a&&b>c)
    {

            printf("%d  IS GREATEST",b);
    }
    else
        printf("%d  IS GREATEST",c);

}
