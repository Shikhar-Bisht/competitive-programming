#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,i;
        vector <int> v;
        cin>>n;
        int temp=n;
        while(temp>0)
        {
            int n=1,c=0;
            while(n*3<temp)
            {
                n=n*3;
                c++;
            }
            temp=temp-n;
            v.push_back(c);
        }
        /*for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }*/
        temp=0;
        int flag=0;
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
               temp=i;
               flag=1;
               break;
            }
        }
        if(flag==0)
        {
            cout<<n<<endl;
        }
        else
        {
            int flag1=0,temp1,var2;
            for(i=temp;i>0;i--)
            {
                int var=v[i]+1;
                if(v[i-1]!=var)
                {
                    flag1=1;
                    temp1=var;
                    var2=i;
                    break;
                }
            }
            if(flag1==0)
            {
                var2=v[0]+1;
                cout<<pow(3,var2)<<endl;
            }
            else
            {
                int ans=0;
                for(i=0;i<var2;i++)
                {
                    ans=ans+pow(3,v[i]);
                }
                ans=ans+pow(3,temp1);
                cout<<ans<<endl;
            }
        }
        cout<<endl;
    }
}
