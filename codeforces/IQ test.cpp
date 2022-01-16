#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ce=0,co=0,pe,po;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0)
        {
            ce++;
            pe=i+1;
        }
        else
        {
            co++;
            po=i+1;
        }
    }
    if(co==1)
    {
        cout<<po;
    }
    else
    {
        cout<<pe;
    }
}
