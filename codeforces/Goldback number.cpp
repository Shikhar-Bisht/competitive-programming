#include<bits/stdc++.h>
using namespace std;
bool checkprime(int temp)
{
    int var=sqrt(temp),i;
    for(i=2;i<=var;i++)
    {
        if(temp%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,i;
    cin>>n;
    if(n>9&&n<50)
    {
        if(n%2==0)
        {
            cout<<"PRIME PAIRS ARE"<<endl;
            for(i=2;i<=n/2;i++)
            {
                int var=n-i;
                if(i%2!=0 && var%2!=0)
                {
                    if(checkprime(i) && checkprime(var))
                    {
                            cout<<i<<" "<<var<<endl;
                    }
                }
            }
        }
        else
        {
            cout<<"INVALID INPUT. NUMBER IS ODD";
        }
    }
    else
    {
        cout<<"INVALID INPUT. NUMBER OUT OF RANGE.";
    }
}

