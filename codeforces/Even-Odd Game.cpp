#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        /*for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }*/
        long long salice=0,sbob=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2==0)
                {
                    salice=salice+arr[i];
                }
            }
            else
            {
                if(arr[i]%2==1)
                {
                    sbob=sbob+arr[i];
                }
            }
        }
        if(sbob>salice)
        {
            cout<<"Bob"<<endl;
        }
        else if(salice>sbob)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Tie"<<endl;
        }
    }
}
