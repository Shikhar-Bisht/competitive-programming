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
            else if(arr[l]<arr[r])
            {
                var=arr[l];
                v.push_back('L');
                l++;
            }
            else
            {
                int temp1=0,temp2=0,var1=l,var2=r;
                var=arr[r];
                var2--;
                temp1++;
                while(l<=var2&&var<arr[var2])
                {
                    var=arr[var2];
                    var2--;
                    temp1++;
                }
                var=arr[l];
                var1++;
                temp2++;
                while(var1<=r&&var<arr[var1])
                {
                    var=arr[var1];
                    var1++;
                    temp2++;
                }
                if(temp1>=temp2)
                {
                    for(i=0; i<temp1; i++)
                    {
                        v.push_back('R');
                    }
                }
                else
                {
                    for(i=0; i<temp2; i++)
                    {
                        v.push_back('L');
                    }
                }
                break;
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
                else if(arr[l]<arr[r])
                {
                    var=arr[l];
                    v.push_back('L');
                    l++;
                }
                else
                {
                    int temp1=0,temp2=0,var1=l,var2=r,tempr=var;
                    while(l<=var2&&var<arr[var2])
                    {
                        var=arr[var2];
                        var2--;
                        temp1++;
                    }
                    var=tempr;
                    while(var1<=r&&var<arr[var1])
                    {
                        var=arr[var1];
                        var1++;
                        temp2++;
                    }
                    if(temp1>=temp2)
                    {
                        for(i=0; i<temp1; i++)
                        {
                            v.push_back('R');
                        }
                    }
                    else
                    {
                        for(i=0; i<temp2; i++)
                        {
                            v.push_back('L');
                        }
                    }
                    break;
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
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
}
