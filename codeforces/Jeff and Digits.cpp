#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c1=0,c2=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==5)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1>=9 && c2>0)
    {
        int var=c1/9;
        c1=var*9;
        for(i=0;i<c1;i++)
        {
            cout<<5;
        }
        for(i=0;i<c2;i++)
        {
            cout<<0;
        }
    }
    else if(c2>0)
    {
        cout<<0;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
