#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll ans=0,n,i,a,b;
        cin>>a>>b>>n;
        ll brr[n],grr[n];
        map<int,int> mb,mg;
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            mb[brr[i]]++;
        }
        for(i=0;i<n;i++)
        {
            cin>>grr[i];
            mg[grr[i]]++;
        }
        for(i=0;i<n;i++)
        {
            ll temp=n,vari1=mb[brr[i]],vari2=mg[grr[i]];
            temp--;
            vari1--;
            vari2--;
            temp=temp-vari1;;
            temp=temp-vari2;
            //cout<<temp<<" ";
            ans=ans+temp;
        }
        //cout<<endl;
        cout<<ans/2<<endl;
    }
}
