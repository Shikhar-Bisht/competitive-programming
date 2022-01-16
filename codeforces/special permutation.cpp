#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n%2==0)
        {
            int temp=n;
            for(i=0;i<n;i++)
            {
                cout<<temp<<" ";
                temp--;
            }
            cout<<endl;
        }
        else
        {
            int temp;
            temp=n/2;
            temp++;
            int var=n;
            cout<<temp<<" ";
            for(i=1;i<=n;i++)
            {
                if(var==temp)
                {
                    var--;
                    continue;
                }
                cout<<var<<" ";
                var--;
            }
            cout<<endl;
        }
    }
}
