#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //var++;
        string s,t,p;
        cin>>s>>t>>p;
        /*if(var==14)
        {
            cout<<s<<endl;
            cout<<t<<endl;
            cout<<p<<endl;
        }*/
        int ls=s.length(),lt=t.length(),lp=p.length();
        int i,j;
        map<char,int> m;
        for(i=0; i<lp; i++)
        {
            m[p[i]]++;
            //cout<<p[i]<<m[p[i]]<<endl;
        }
        i=0;
        j=0;
        int flag=0;
        while(true)
        {
            //cout<<m['y']<<" "<<i<<" "<<j<<endl;
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                if(m[t[j]]>0)
                {
                    m[t[j]]--;
                    j++;
                    //c++;
                }
                else
                {
                    //cout<<i<<" "<<j<<endl;
                    flag=1;
                    break;
                }
            }
            if(i==ls)
            {
                int flag1=0;
                if(j!=lt)
                {
                    while(true)
                    {
                        /*cout<<m['y']<<" "<<j<<endl;
                        if(t[j]=='y')
                        {
                            cout<<m[t[j]]<<endl;
                        }*/
                        if(m[t[j]]>0)
                        {
                            m[t[j]]--;
                            j++;
                            //m[t[j]]--;
                            //c++;
                        }
                        else
                        {
                            //cout<<t[j]<<" "<<m[t[j]]<<endl;
                            flag1=1;
                            break;
                        }
                        if(j==lt)
                        {
                            break;
                        }
                    }
                }
                if(flag1==0)
                {
                    break;
                }
                else
                {
                    //cout<<i<<" "<<j<<endl;
                    flag=1;
                    break;
                }
            }
            else if(j==lt)
            {
                //cout<<i<<" "<<j<<endl;
                flag=1;
                break;
            }
        }
        //cout<<endl;
        if(flag==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
}
