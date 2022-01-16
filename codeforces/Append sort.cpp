#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int i,arr[n],c=0;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            while(arr[i]>=arr[i+1])
            {
                arr[i+1]=arr[i+1]*10;
                c++;
            }
        }
    }
    cout<<c;
    }
    return 0;
}

