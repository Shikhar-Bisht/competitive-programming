#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    while(k--)
    {
        int c=0,f1,t1,f2,t2;
        cin>>t1>>f1>>t2>>f2;
        if(abs(t1-t2)==0)
        {
            c=c+abs(f1-f2);
        }
        else
        {
            c=c+abs(t1-t2);
            if(f1<a)
            {
                c=c+a-f1;
                f1=a;
            }
            if(f1>b)
            {
                c=c+f1-b;
                f1=b;
            }
            c=c+abs(f1-f2);
        }
        cout<<c<<endl;
    }
}
