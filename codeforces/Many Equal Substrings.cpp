#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;
    cin>>l>>n;
    string s;
    cin>>s;
    int i=0,j=1,k;
    while(j<l)
    {
        k=j;
        i=0;
        while(k<l&&s[i]==s[k])
        {
            i++;
            k++;
        }
        if(k==l)
        {
            break;
        }
        j++;
    }
    cout<<s;
    //cout<<j<<endl;
    int temp=l-j;
    //cout<<temp<<endl;
    for(i=1;i<n;i++)
    {
        for(j=temp;j<l;j++)
        {
            cout<<s[j];
        }
    }
}
