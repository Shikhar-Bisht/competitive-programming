#include<bits/stdc++.h>
using namespace std;
void sol()
{
    string s,sol="";
    int flag=0;
    cin>>s;
    int l;
    l=s.length();
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<sol.length(); j++)
        {
            if(sol[j]==s[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            flag=0;
            continue;
        }
        int var=i,c=0;
        while(s[i]==s[var]&&var<l)
        {
            var++;
            c++;
        }
        if(c%2!=0)
        {
            sol=sol+s[i];
        }
        i=i+c-1;
    }
    sort(sol.begin(),sol.end());
    cout<<sol<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
