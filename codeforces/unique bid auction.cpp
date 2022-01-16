#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x,j,k,no;
        cin>>x;
        int arr[x];
        for(j=0;j<x;j++)
            cin>>arr[j];
        for(j=0;j<x;j++)
        {
            if(arr[j]!=0)
            {
                no=arr[j];
                for(k=j;k<x;k++)
                    {
                        if(arr[k]==no)
                        {
                            arr[k]=0;
                        }
                    }
            }
        }
        for(j=0;j<x-1;j++)
        {
            if(arr[j]!=0)
            {
            no=arr[j];
            if(arr[j+1]<arr[j])
            {
                no=arr[j+1];
            }
            }
        }
        cout<<no<<endl;
    }
    return 0;
}
