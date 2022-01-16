#include<iostream>
#define floop(i,k,n) for(int i=k;i<n;++i)
using namespace std;
void sortfun(long long int arr[],long long int n)
{
    long long int i,j;
    floop(i,0,n-1)
    {
        long long int min=i;
        floop(j,i+1,n)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        int t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }
    }
int main()
{
    long long int n,i,k=0,z=0;
    cin>>n;
    long long int arr[n];
    floop(i,0,n)
        cin>>arr[i];
    sortfun(arr,n);
    k=(n-1)/2;
    cout<<arr[k];
    return 0;
}
