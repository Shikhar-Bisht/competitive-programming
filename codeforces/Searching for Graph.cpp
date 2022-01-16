#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int c=2*n,i,j;
        c=c+p;
        for(i=1;i<n;i++)
        {
            int flag=0;
            for(j=i+1;j<=n;j++)
            {
                cout<<i<<" "<<j<<endl;
                c--;
                if(c==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
}
