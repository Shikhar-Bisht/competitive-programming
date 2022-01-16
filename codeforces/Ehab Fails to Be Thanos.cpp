#include <iostream>
#include <algorithm>
using namespace std;
int arr[2005];
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<2*n;i++)
    scanf("%d",&arr[i]);
    sort(arr,arr+2*n);
    if (arr[0]==arr[2*n-1])
    {
        printf("-1");
        return 0;
    }
    for (int i=0;i<2*n;i++)
    printf("%d ",arr[i]);
}
