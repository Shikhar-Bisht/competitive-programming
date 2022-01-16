#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        string var="";
        for(int j=i;j<l;j++)
        {
            var=var+s[j];
            cout<<var<<" ";
        }
        cout<<endl;
    }
}
