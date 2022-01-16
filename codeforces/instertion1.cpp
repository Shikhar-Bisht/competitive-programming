#include<stdio.h>
int main()
{
    int i,j,n;
    int arr[200];
    printf("ENTER NO. OF ELEMENTS");
    scanf("%d",&n);
    arr[n];
    printf("\nENTER THE ELEMENTS");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for (j= 1; j<n; j++)
    {
    int key = arr[j];
    i =j-1;

    while (key<arr[i] &&i>= 0)
    {
      arr[i+1] = arr[i];
      --i;
    }
    arr[i+1]=key;
    }

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}