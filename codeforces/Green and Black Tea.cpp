#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,bi,sm,flag=0,i,df=0;
    char big,small;
    vector<char> ans;
    cin>>n>>k>>a>>b;
    if(a>b)
    {
        bi=a;
        big='G';
        sm=b;
        small='B';
    }
    else if(b>a)
    {
        bi=b;
        big='B';
        sm=a;
        small='G';
    }
    else
    {
        flag=1;
        bi=a;
        big='G';
        sm=b;
        small='B';
    }
    while(bi>0||sm>0)
    {
        cout<<sm<<endl;
        if(flag=0)
        {
            cout<<"Here"<<endl;
            if(sm==0)
            {
                cout<<"Yes here"<<endl;
                if(bi<=k)
                {
                    cout<<"NOT here"<<endl;
                    for(i=0; i<bi; i++)
                    {
                        ans.push_back(big);
                    }
                    break;
                }
                else
                {
                    cout<<"here"<<endl;
                    df=1;
                    break;
                }
            }
            int var=bi-sm;
            if(var>k)
            {
                var=k;
            }
            else
            {
                flag=1;
            }
            bi=bi-var;
            sm=sm--;
            for(i=0; i<var; i++)
            {
                ans.push_back(big);
            }
            ans.push_back(small);
        }
        else
        {
            ans.push_back(big);
            bi--;
            if(sm>0)
            {
                ans.push_back(small);
                sm--;
            }
        }
    }
    if(df==1)
    {
        cout<<"NO";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            cout<<ans[i];
        }
    }
}
