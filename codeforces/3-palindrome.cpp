#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    string s="",a="aa",b="aab",str="aabb";
    /*for(int i=0; i<n/2; i++)
    {
        if(i%2==0)
        {
            s=s+a;
        }
        else
        {
            s=s+b;
        }
    }
    if(n%2==1)
    {
        if(s[n-2]=='a')
        {
            s=s+"b";
        }
        else
        {
            s=s+"a";
        }
    }
    */
    for(int i=0;i<n/4;i++)
    {
        cout<<str;
    }
    if(n%4!=0)
    {
        if(n%4==1)
        {
            cout<<"a";
        }
        else if(n%4==2)
        {
            cout<<a;
        }
        else
        {
            cout<<b;
        }
    }
}
