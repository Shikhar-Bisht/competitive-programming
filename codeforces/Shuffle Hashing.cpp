#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int> mainmap,countmap;
        string s,h;
        cin>>s>>h;
        int l=s.length(),i,j;
        for(i=0; i<l; i++)
        {
            int flag=0;
            for(auto &var : mainmap)
            {
                if(var.first==s[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                mainmap[s[i]]=0;
                countmap[s[i]]=0;
            }
        }
        for(i=0; i<l; i++)
        {
            mainmap[s[i]]++;
        }
        int l1=h.length();
        int finalfinalflag=0;
        for(i=0; i<l1; i++)
        {
            int flag=0,finalflag=0,resetflag=0,variable;
            for(auto &var : countmap)
            {
                if(var.first==h[i])
                {
                    countmap[var.first]++;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                for(auto &var:countmap)
                {
                    if(countmap[var.first]>mainmap[var.first])
                    {
                        int c=0;
                        for(j=i;j>=0;j--)
                        {
                            if(h[j]==var.first)
                            {
                                c++;
                            }
                            if(c==countmap[var.first])
                            {
                                break;
                            }
                        }
                        variable=j;
                        resetflag=1;
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                for(auto &var:countmap)

                {
                    countmap[var.first]=0;
                }
            }
            //for(auto &var:countmap)
            //{
                //cout<<var.first<<" "<<countmap[var.first]<<" "<<mainmap[var.first]<<endl;
            //}
            //cout<<endl;
            for(auto &var:countmap)
            {
                if(countmap[var.first]!=mainmap[var.first])
                {
                    finalflag=1;
                }
            }
            if(finalflag==0)
            {
                finalfinalflag=1;
                break;
            }
            if(resetflag==1)
            {
                i=variable;
            }
        }
        //for(auto &var:countmap)
        //{
            //cout<<var.first<<" "<<countmap[var.first]<<" "<<mainmap[var.first]<<endl;
        //}
        if(finalfinalflag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
