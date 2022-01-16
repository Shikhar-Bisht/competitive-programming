#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,m,i,ar1=-1,ar2=-1;
        cin>>n>>x>>m;
        for(i=0;i<m;i++)
        {
            int temp1,temp2;
            cin>>temp1>>temp2;
            if(ar1==-1&&ar2==-1)
            {
                if(x>=temp1&&x<=temp2)
                {
                    ar1=temp1;
                    ar2=temp2;
                }
            }
            else
            {
                if((temp1>=ar1&&temp1<=ar2)||(temp2>=ar1&&temp2<=ar2)||(ar1>=temp1&&ar1<=temp2)||(ar2>=temp1&&ar2<=temp2))
                {
                    ar1=min(ar1,temp1);
                    ar2=max(ar2,temp2);
                }
            }
        }
        int ans=ar2-ar1+1;
        cout<<ans<<endl;
    }
}
