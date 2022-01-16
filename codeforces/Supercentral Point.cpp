#include<bits/stdc++.h>
using namespace std;
struct cordinate
{
    int x,y;
};
int main()
{
    int n,i,j,ans=0;
    cin>>n;
    struct cordinate c[n];
    for(i=0; i<n; i++)
        cin>>c[i].x>>c[i].y;
    for(i=0; i<n; i++)
    {
        int f1=0,f2=0,f3=0,f4=0;
        for(j=0; j<n; j++)
        {
            if(f1==0)
            {
                if(c[i].x>c[j].x&&c[i].y==c[j].y)
                {
                    f1=1;
                }
            }
            if(f2==0)
            {
                if(c[i].x<c[j].x&&c[i].y==c[j].y)
                {
                    f2=1;
                }
            }
            if(f3==0)
            {
                if(c[i].x==c[j].x&&c[i].y<c[j].y)
                {
                    f3=1;
                }
            }
            if(f4==0)
            {
                if(c[i].x==c[j].x&&c[i].y>c[j].y)
                {
                    f4=1;
                }
            }
            if(f1==1&&f2==1&&f3==1&&f4==1)
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
