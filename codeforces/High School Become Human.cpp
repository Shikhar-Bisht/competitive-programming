#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x==y)
    {
        cout<<"=";
    }
    else if(x==1)
    {
        cout<<"<";
    }
    else if(y==1)
    {
        cout<<">";
    }
    else if(x<y)
    {
        if(x==2)
        {
            if(y==3)
            {
                cout<<"<";
            }
            else if(y==4)
            {
                cout<<"=";
            }
            else
            {
                cout<<">";
            }
        }
        else
        {
            cout<<">";
        }

    }
    else
    {
        if(y==2)
        {
            if(x==3)
            {
                cout<<">";
            }
            else if(x==4)
            {
                cout<<"=";
            }
            else
            {
                cout<<"<";
            }
        }
        else
        {
            cout<<"<";
        }
    }
}
