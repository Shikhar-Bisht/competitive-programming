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
        int temp=n*2;
        int arr[temp];
        int i;
        for(i=0; i<n; i++)
        {
            int var;
            cin>>var;
            var--;
            arr[var]=i;
        }
        for(i=0; i<n; i++)
        {
            int var;
            cin>>var;
            var--;
            arr[var]=i;
        }
        int mini=arr[0],ans=-1;
        /*for(i=0;i<temp;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;*/
        for(i=0; i<temp; i++)
        {
            if(i%2==0)
            {
                //cout<<mini<<" "<<arr[i]<<endl;
                if(arr[i]<mini)
                {
                    mini=arr[i];
                }
            }
            else
            {
                int var=arr[i]+mini;
                //cout<<var<<endl;
                if(ans==-1)
                {
                    ans=var;
                }
                else
                {
                    if(var<ans)
                    {
                        ans=var;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
