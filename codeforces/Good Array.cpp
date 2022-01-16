#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],max1=0,max2=0,i;
    vector <int> v;
    long long sum=0,temp;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=0)
        {
            if(arr[i]>arr[max1])
            {
                max1=i;
            }
        }
    }
    if(max1==0)
    {
        max2=1;
    }
    for(i=0;i<n;i++)
    {
        if(i==max1)
        {
            continue;
        }
        if(arr[i]>arr[max2])
        {
            max2=i;
        }
        sum=sum+arr[i];
    }
    temp=sum-arr[max1];
    for(i=0;i<n;i++)
    {
        if(i==max1)
        {
            continue;
        }
        if(arr[i]==temp)
        {
            v.push_back(i+1);
        }
    }
    temp=sum-arr[max2];
    //cout<<temp<<" "<<arr[max2]<<endl;
    if(temp==arr[max2])
    {
        v.push_back(max1+1);
    }
    //cout<<max1<<" "<<max2<<endl;
    //cout<<sum<<endl;
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
