#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
    int n;
    cin>>n;
    //n=t;
    string s1[20]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string s10[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string sans="";
    if(n<20)
    {
        sans=s1[n];
    }
    else
    {
        if(n%10==0)
        {
            sans=s10[n/10];
        }
        else
        {
        sans=s10[n/10]+"-"+s1[n%10];
        }
    }
    if(n==0)
    {
        sans="zero";
    }
    if(n==100)
    {
        sans="hundred";
    }
    cout<<sans;
    return 0;
    //}
}
