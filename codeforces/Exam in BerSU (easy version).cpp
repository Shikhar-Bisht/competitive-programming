#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[n],sum=0;
    vector<int> v;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
        int ans=0;
        if(sum>m)
        {
            int var=sum;
            for(j=i-1; j>=0; j--)
            {
                if(var<=m)
                {
                    break;
                }
                else
                {
                    //cout<<var<<" ";
                    var=var-arr[j];
                    ans++;
                }
            }
        }
        int temp=i+1;
        sort(arr,arr+temp);
        //cout<<endl;
        v.push_back(ans);
    }
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
