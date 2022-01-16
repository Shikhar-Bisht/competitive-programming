#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,flag=0;
    cin>>n>>m;
    string srr[n],ans;
    int arr[m];
    map<int,int> ma;
    for(i=0; i<n; i++)
    {
        cin>>srr[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>arr[i];
        ma[arr[i]-1]++;
    }
    int temp=arr[0]-1;
    ans=srr[temp];
    int l=ans.length();
    for(i=1; i<m; i++)
    {
        int temp=arr[i]-1;
        int l2=srr[temp].length();
        if(l!=l2)
        {
            flag=1;
            break;
        }
        else
        {
            int j;
            for(j=0; j<l; j++)
            {
                if(ans[j]!=srr[temp][j])
                {
                    ans[j]='?';
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"No";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(ma[i]==1)
            {
                continue;
            }
            else
            {
                int l1=srr[i].length();
                if(l!=l1)
                {
                    continue;
                }
                else
                {
                    int semif=0,j;
                    for(j=0;j<l;j++)
                    {
                        if(ans[j]=='?')
                        {
                            continue;
                        }
                        else
                        {
                            if(srr[i][j]!=ans[j])
                            {
                                semif=1;
                                break;
                            }
                        }
                    }
                    if(semif==0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes"<<endl;
            cout<<ans;
        }
    }
}
