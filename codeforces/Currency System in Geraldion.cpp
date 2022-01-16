#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<-1;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
