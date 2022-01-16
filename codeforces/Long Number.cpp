#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    int arr[10];
    for(i=1;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int temp=s[i]-'0';
        if(temp<arr[temp])
        {
            break;
        }
    }
    //cout<<i<<endl;
    if(i==n)
    {
        cout<<s;
    }
    else
    {
        int var=i;
        for(i=var;i<n;i++)
        {
            int temp=s[i]-'0';
            if(temp>arr[temp])
            {
                break;
            }
        }
        int var2=i;
        for(i=0;i<var;i++)
        {
            cout<<s[i];
        }
        for(i=var;i<var2;i++)
        {
            int temp=s[i]-'0';
            char temp1='0'+arr[temp];
            cout<<temp1;
        }
        for(i=var2;i<n;i++)
        {
            cout<<s[i];
        }
    }
}
