#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l=s.length(),flag=0;
    for(i=0;i<l;i++)
    {
        if(i>1)
        {
            int var1=s[i-2]-'A',var2=s[i-1]-'A';
            int temp=var1+var2;
            temp=temp%26;
            //cout<<temp<<" "<<'A'+temp<<endl;
            if(s[i]=='A'+temp)
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
