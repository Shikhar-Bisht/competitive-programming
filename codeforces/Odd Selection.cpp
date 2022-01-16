#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ce=0,co=0,i;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp%2==0)
            {
                ce++;
            }
            else
            {
                co++;
            }
        }
        int var=k-min(ce,k);
        if(k%2==0&&ce==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(var%2==0)
        {
            if(co>=var+1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(co>=var)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
