#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i,j;
    cin>>n>>l;
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    vector<int> v1,v2;
    int temp=arr1[0]+(l-arr1[n-1]);
    v1.push_back(temp);
    temp=arr2[0]+(l-arr2[n-1]);
    v2.push_back(temp);
    for(i=1;i<n;i++)
    {
        temp=arr1[i]-arr1[i-1];
        v1.push_back(temp);
        temp=arr2[i]-arr2[i-1];
        v2.push_back(temp);
    }
    n=v1.size();
    temp=0;
    int flag=0;
    while(temp<n)
    {
        j=temp;
        for(i=0;i<n;i++)
        {
            if(v1[i]!=v2[j])
            {
                break;
            }
            j++;
            if(j==n)
            {
                j=0;
            }
        }
        if(i==n)
        {
            flag=1;
            break;
        }
        temp++;
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
