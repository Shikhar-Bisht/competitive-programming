#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target,i;
    cin>>n>>target;
    vector<int> nums;
    for(i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    /*for(i=0;i<n;i++)
    {
        cout<<nums[i];
    }*/
int l=nums.size();
    int j=l-1;
    int mid;
    while(i<=j)
    {
        mid=(i+j)/2;
        //cout<<mid<<endl;
        if(nums[mid]>nums[mid+1])
        {
            break;
        }
        if(nums[mid]<nums[0])
        {
            j=mid-1;
        }
        else
        {
            i=mid+1;
        }
    }
    if(target==nums[0])
    {
        cout<<1;
    }
    else if(target==nums[l-1])
    {
        cout<<l;
    }
    else
    {
        if(target>nums[0])
        {
            i=0;
            j=mid;
        }
        else
        {
            i=mid+1;
            j=l-1;
        }
        int flag=0;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[mid]==target)
            {
                flag=1;
                break;
            }
            if(nums[mid]>target)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        if(flag==0)
        {
            cout<<-1;
        }
        else
        {
            cout<<mid;
        }
    }
}
