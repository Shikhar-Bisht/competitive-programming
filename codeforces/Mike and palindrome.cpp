#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int l,i,c=0,var;
    cin>>str;
    l=str.length();
    l=l-1;
    var=l/2;
    for(i=0;i<=var;i++)
    {
        if(str[i]!=str[l-i])
        {
            c++;
        }
    }
    l=l+1;
    if(c==1||(c==0&&l%2==1))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}


