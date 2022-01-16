#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j=0;
        cin>>n;
        vector <int> v;
        int arr[n],brr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            if(brr[i]==0)
            {
                v.push_back(arr[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(i=0;i<n;i++)
        {
            if(brr[i]==0)
            {
                cout<<v[j]<<" ";
                j++;
            }
            else
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}
