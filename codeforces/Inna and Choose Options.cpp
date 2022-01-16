#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector <int> v;
        int c=0;
        for(int i=1;i<=12;i++)
        {
            if(12%i==0)
            {
                int flag=0;
                for(int j=0;j<12/i;j++)
                {
                    int flag1=0;
                    for(int k=0;k<i;k++)
                    {
                        if(s[j+k*(12/i)]!='X')
                        {
                            flag1=1;
                            break;
                        }
                    }
                    if(flag1==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    c++;
                    v.push_back(i);
                }
            }
        }
        cout<<c<<" ";
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<"x"<<12/v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
}
