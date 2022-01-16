#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double W,H,x1,x2,y1,y2,h,w;
        cin>>W>>H;
        cin>>x1>>y1>>x2>>y2;
        cin>>w>>h;
        double dwl=x1,dwr=W-x2,dhl=y1,dhr=H-y2;
        //cout<<dwl<<" "<<dhl<<" "<<dwr<<" "<<dhr<<endl;
        double cwl=-1,chl=-1,cwr=-1,chr=-1;
        if(x2+(w-dwl)<=W)
        {
            cwl=w-dwl;
            if(cwl<0)
            {
                cwl=0;
            }
        }
        if(x1-(w-dwr)>=0)
        {
            cwr=w-dwr;
            if(cwr<0)
            {
                cwr=0;
            }
        }
        if(y2+(h-dhl)<=H)
        {
            chl=h-dhl;
            if(chl<0)
            {
                chl=0;
            }
        }
        if(y1-(h-dhr)>=0)
        {
            chr=h-dhr;
            if(chr<0)
            {
                chr=0;
            }
        }
        //cout<<cwl<<" "<<cwr<<" "<<chl<<" "<<chr<<endl;
        double maxi=max(cwl,max(cwr,(max(chl,chr))));
        if(cwl<0)
        {
            cwl=maxi;
        }
        if(cwr<0)
        {
            cwr=maxi;
        }
        if(chl<0)
        {
            chl=maxi;
        }
        if(chr<0)
        {
            chr=maxi;
        }
        double ans=min(cwl,min(cwr,(min(chl,chr))));
        if(ans<0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(9)<<ans<<endl;
        }
    }
}
