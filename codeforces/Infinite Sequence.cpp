#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a==b)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        if((b>=a&&c>0)||(b<=a)&&c<0)
        {
            if((b-a)%c==0)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
        else
        {
            cout<<"NO";
        }
    }
}
