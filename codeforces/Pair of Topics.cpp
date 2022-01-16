#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n],i,diff[n];
    long long ans=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    for(i=0;i<n;i++)
    {
        diff[i]=arr[i]-brr[i];
    }
    vector<int> v;
    for(i=0;i<n;i++)
    {
        v.push_back(brr[i]-arr[i]);
    }
    sort(v.begin(),v.end());
    /*for(i=0;i<n;i++)
    {
        cout<<diff[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    for(i=0;i<n;i++)
    {
        vector<int>::iterator temp;
        temp=lower_bound(v.begin(),v.end(),diff[i]);
        int vari=temp-v.begin();
        if(diff[i]>0)
        {
            vari--;
        }
        ans=ans+vari;
        //cout<<diff[i]<<" "<<vari<<endl;
    }
    cout<<ans/2;
}
