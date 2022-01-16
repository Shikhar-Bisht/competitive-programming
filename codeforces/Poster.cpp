#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string str;
    cin>>n>>k;
    cin>>str;
    while(k!=1&&k!=n)
    {
        if(n-k>=k)
        {
            k--;
            cout<<"LEFT"<<endl;
        }
        else
        {
            k++;
            cout<<"RIGHT"<<endl;
        }
        }
    if(k==n)
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<"PRINT"<<" "<<str[i]<<endl;
            if(i!=0)
                cout<<"LEFT"<<endl;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<"PRINT"<<" "<<str[i]<<endl;
            if(i!=n-1)
                cout<<"RIGHT"<<endl;
        }
    }
    return 0;
}
