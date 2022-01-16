#include<iostream>
using namespace std;
int main()
{
    int x,m=0;
    cin>>x;
    string a,b;
    cin>>a>>b;
    for(int i=0; i<x; i++)
    {
        if(a[i]>b[i])
        {
            if((a[i]-b[i])>5)
            {
                m=m+b[i]+10-a[i];
            }
            else
            {
                m=m+a[i]-b[i];
            }
        }
        else
        {
            if((b[i]-a[i])>5)
            {
                m=m+a[i]+10-b[i];
            }
            else
            {
                m=m+b[i]-a[i];
            }
        }

    }
    cout<<m;
    return 0;
}
