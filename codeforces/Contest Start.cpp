#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,x,t,i,diss=0,sum=0;
        cin>>n>>x>>t;
        //for(i=1;i<=n;i++)
        //{
            //diss=diss+min(n-i,t/x);
        //}
        diss=max(unsigned long long 0,n-t/x)*t/x+min(n-1,t/x-1)*min(n,t/x)/2;
        cout<<diss<<endl;
    }
}
