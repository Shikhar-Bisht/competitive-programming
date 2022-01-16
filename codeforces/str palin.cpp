#include<stdio.h>
#include<string.h>
void palindrome(char *p)
{
    int i,j,l=0,c=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        l++;
    }
    for(i=0,j=l-1;*(p+i)!='\0';i++,j--)
    {
        if(*(p+i)!=*(p+j))
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("palindrome");
    else
        printf("not palindrome");
}
int main()
{
    char a[100];
    gets(a);
    palindrome(a);
    return 0;
}
