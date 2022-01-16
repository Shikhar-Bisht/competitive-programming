#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    vector<char> v;
    int var=-1,c=0;
    while(l<=r)
    {
        if(var==-1)
        {
            if(arr[l]>arr[r])
            {
                var=arr[r];
                v.push_back('R');
                r--;
            }
            else
            {
                var=arr[l];
                v.push_back('L');
                l++;
            }
        }
        else
        {
            if(var<arr[r]&&var<arr[l])
            {
                if(arr[l]>arr[r])
                {
                    var=arr[r];
                    v.push_back('R');
                    r--;
                }
                else
                {
                    var=arr[l];
                    v.push_back('L');
                    l++;
                }
            }
            else if(var<arr[r])
            {
                while(l<=r&&var<arr[r])
                {
                    var=arr[r];
                    v.push_back('R');
                    r--;
                }
            }
            else if(var<arr[l])
            {
                while(l<=r&&var<arr[l])
                {
                    var=arr[l];
                    v.push_back('L');
                    l++;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
