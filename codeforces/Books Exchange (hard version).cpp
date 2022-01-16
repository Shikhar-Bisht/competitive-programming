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
        int arr[n],i,ans[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            ans[i]=-1;
        }
        for(i=0;i<n;i++)
        {
            if(ans[i]==-1)
            {
                int var=i,c=1;
                vector<int> v;
                v.push_back(i);
                while(arr[var]!=i+1)
                {
                    v.push_back(arr[var]-1);
                    var=arr[var]-1;
                    c++;
                }
                int j;
                for(j=0;j<v.size();j++)
                {
                    //cout<<v[j]<<" ";
                    ans[v[j]]=c;
                }
                //cout<<endl;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
