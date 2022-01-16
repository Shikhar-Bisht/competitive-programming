#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),i,ne=0,no=0,ans=0,cha=0;
    map<char,int> m;
    map<char,int>::iterator it;
    for(i=0; i<l; i++)
    {
        m[s[i]]++;
    }
    for(it=m.begin(); it!=m.end(); it++)
    {
        //cout<<it->first<<" "<<it->second<<endl;
        if(it->second%2==0)
        {
            ne++;
        }
        else
        {
            no++;
        }
        cha++;
    }
    int total=ne+no;
    if(l%2==0)
    {
        if(cha==ne)
        {
            cout<<"First"<<;
        }
        else
        {
            ans=total+ne-1;
            if(ans%2==0)
            {
                cout<<"First";
            }
            else
            {
                cout<<"Second";
            }
        }
    }
    else
    {
        if(no==1)
        {
            cout<<"First";
        }
        else
        {
            ans=total+ne-1;
            if(ans%2==0)
            {
                cout<<"First";
            }
            else
            {
                cout<<"Second";
            }
        }
    }
}
