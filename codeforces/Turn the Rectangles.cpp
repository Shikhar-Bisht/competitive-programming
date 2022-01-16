#include<bits/stdc++.h>
using namespace std;
struct p
{
    int a;
    int b;
};
int main()
{
    int n,i,k,flag=0;
    cin>>n;
    struct p pa[n];
    for(i=0;i<n;i++)
        cin>>pa[i].a>>pa[i].b;
    k=max(pa[0].a,pa[0].b);
    for(i=1;i<n;i++)
    {
        int var;
        if(max(pa[i].a,pa[i].b)<=k)
        {
            var=max(pa[i].a,pa[i].b);
        }
        else
        {
            var=min(pa[i].a,pa[i].b);
        }
        if(var<=k)
        {
            k=var;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
