#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i;
    cin>>l;
    int arr[l];
    for(i=0; i<l; i++)
    {
        cin>>arr[i];
        int var=i;
        while(var>0&&arr[(var-1)/2]<arr[var])
        {
            int temp=arr[var];
            arr[var]=arr[(var-1)/2];
            arr[(var-1)/2]=temp;
            var=(var-1)/2;
        }
    }
    //for(i=0; i<l; i++)
    //{
        //cout<<arr[i]<<" ";
    //}
    int var=l-1;
    while(var>0)
    {
        int temp=arr[0];
        arr[0]=arr[var];
        arr[var]=temp;
        i=0;
        while(i*2+2<var&&(arr[i]<arr[i*2+1]||arr[i]<arr[i*2+2]))
        {
            if(arr[i*2+1]>arr[i*2+2])
            {
                int temp=arr[i];
                arr[i]=arr[i*2+1];
                arr[i*2+1]=temp;
                i=i*2+1;
            }
            else
            {
                int temp=arr[i];
                arr[i]=arr[i*2+2];
                arr[i*2+2]=temp;
                i=i*2+2;
            }
        }
        var--;
    }
    for(i=0; i<l; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
