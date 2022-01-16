#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,c=0;
        cin>>x>>y;
        while(y)
        {
            if(y>=x)
            {
                int temp=x;
                while(y>=temp*10)
                {
                    temp=temp*10;
                }
                cout<<"t = "<<temp<<endl;
                int var=y/temp;
                y=y-temp*var;
                cout<<"v = "<<var<<endl;
                c=c+var;
            }
            else
            {
                y=y-1;
                c++;
            }
        }
        cout<<c<<endl;
    }
}
