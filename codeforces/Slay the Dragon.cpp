#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,sum=0;
    cin>>n;
    multiset<ll> he;
    multiset<ll,greater<ll>> heg;
    for(i=0; i<n; i++)
    {
        ll temp;
        cin>>temp;
        he.insert(temp);
        heg.insert(temp);
        sum=sum+temp;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll def,att,temp=sum;
        cin>>def>>att;
        ll temp1,temp2;
        temp1=*he.lower_bound(def);
        temp2=*heg.lower_bound(def);
        if(he.lower_bound(def)==he.begin())
        {
            temp=temp-temp1;
            if(temp<att)
            {
                cout<<att-temp<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else if(heg.lower_bound(def)==heg.begin())
        {
            ll ans=0;
            ans=def-temp2;
            temp=temp-temp2;
            if(temp<att)
            {
                ans=ans+(att-temp);
            }
            if(ans>0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            ll temp=sum,ans1=0,ans2=0,ans;
            temp=temp-temp1;
            ans1=att-temp;
            temp=sum;
            temp=temp-temp2;
            ans2=ans2+(def-temp2);
            if(att-temp>0)
                ans2=ans2+(att-temp);
            ans=min(ans1,ans2);
            if(ans<=0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
            /*ll var1=abs(def-temp1),var2=abs(def-temp2),ans=0;
            /*if(att==6654)
            {
                cout<<var1<<" "<<var2<<endl;
            }
            if(var1<var2)
            {
                //ans=def-temp1;
                temp=temp-temp1;
                if(att==6654)
                {
                    cout<<temp1<<" "<<temp2<<" "<<temp<<" "<<ans<<endl;
                }
                if(temp<att)
                {
                    ans=ans+(att-temp);
                }
                if(ans>0)
                {
                    cout<<ans<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else
            {
                if(temp-temp1>=att)
                {
                    cout<<0<<endl;
                    continue;
                }
                ans=def-temp2;
                temp=temp-temp2;
                /*if(att==6654)
                {
                    cout<<temp1<<" "<<temp2<<" "<<temp<<" "<<ans<<endl;
                }
                if(temp<att)
                {
                    ans=ans+(att-temp);
                }
                if(ans>0)
                {
                    cout<<ans<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            //}*/
        }
    }
    /*ll var;
    cin>>var;
    ll temp1,temp2;
    temp1=*he.lower_bound(var);
    temp2=*heg.lower_bound(var);
    if(he.lower_bound(var)==he.begin())
    {
        cout<<"end of he"<<endl;
    }
    if(heg.lower_bound(var)==heg.begin())
    {
        cout<<"end of heg"<<endl;
    }
    cout<<temp1<<" "<<temp2;*/
}

