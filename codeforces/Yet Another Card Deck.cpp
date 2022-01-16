#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j;
    cin>>n>>q;
    int arr[n],qrr[q];
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=0; i<q; i++)
        cin>>qrr[i];
    for(j=0; j<q; j++)
    {
        int var;
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                var=arr[i];
                if(qrr[j]==var)
                {
                    cout<<i+1<<" ";
                    break;
                }
            }
            else
            {
                int temp=arr[i];
                arr[i]=var;
                var=temp;
                if(qrr[j]==var)
                {
                    cout<<i+1<<" ";
                    arr[0]=var;
                    break;
                }
            }

        }
    }
}
