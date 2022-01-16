#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch1='#',ch2='#';
    int c=0,i,flag1=0,flag2=0;
    for(i=0;i<n;i++)
    {
        char temp;
        cin>>temp;
        if(temp=='R'||temp=='L')
        {
            if(ch1=='#')
            {
                ch1=temp;
            }
            else if(ch1!=temp)
            {
                ch1=temp;
                ch2='#';
                c++;
            }
        }
        else
        {
            if(ch2=='#')
            {
                ch2=temp;
            }
            else if(ch2!=temp)
            {
                ch2=temp;
                ch1='#';
                c++;
            }
        }
    }
    //cout<<var<<endl;

    cout<<c+1;
}
