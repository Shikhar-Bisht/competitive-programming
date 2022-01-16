#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==1)
        {
            if(n==1)
            {
                cout<<"FastestFinger"<<endl;
            }
            else
            {
                cout<<"Ashishgup"<<endl;
            }
        }
        else
        {
            if(n==2)
            {
                cout<<"Ashishgup"<<endl;
                continue;
            }
            int temp=n/2;
            if(temp%2==1)
            {
                int c=0;
                n=n/2;
                int flag=0,i;
                for(i=3;i<=sqrt(n);i++)
                {
                    if(n%i==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    cout<<"Ashishgup"<<endl;
                }
                else
                {
                    cout<<"FastestFinger"<<endl;
                }
            }
            else
            {
                int flag=0;
                while(n>1)
                {
                    if(n%2==1)
                    {
                        break;
                    }
                    else
                    {
                        n=n/2;
                    }
                }
                if(n>1)
                {
                    flag=1;
                }
                if(flag==1)
                {
                    cout<<"Ashishgup"<<endl;
                }
                else
                {
                    cout<<"FastestFinger"<<endl;
                }
            }
        }
    }
}
