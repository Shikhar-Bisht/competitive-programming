#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string str,str1="";
    cin>>str;
    int i,x=99999;
    int l=str.length();
    for(i=l-1;i>=0;i--)
        str1=str1+str[i];
    for(i=0;i<l;i++)
    {
        if(str[i]==str1[i]!='a')
        {
            x=i;
            break;
        }
        cout<<"NO"<<endl;
    }
    if(x!=99999)
    {
    cout<<"YES"<<endl;
    for(i=0;i<x;i++)
        cout<<str[i];
    cout<<"a";
    for(i=x;i<l;i++)
        cout<<str[i];
    cout<<endl;
    }
    }
    return 0;

}
