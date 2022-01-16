  
#include<stdio.h>
int main()
{
    int a,b,n,i,temp,j;
    int arr[100];
    printf("ENTER SIZE OF ARRAY");
    scanf("%d",&n);
    arr[n];
    printf("ENTER THE NO.S");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(j=0;j<n-1;j++)
    {
    for(i=0;i<n-j-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    printf("2nd max= %d",arr[n-2]);
    printf("2nd min= %d",arr[1]);
}