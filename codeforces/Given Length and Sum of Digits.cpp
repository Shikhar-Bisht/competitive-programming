#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s1,i;
    cin>>m>>s1;
    int s=s1;
    int range1=m*9,range2=m;
    if(s>0&&s<=range1)
    {
        for(i=0; i<m; i++)
        {
            int var,temp=9*(m-i-1);
            if(i==0)
            {
                var=1;
                s=s-var;
                if(s>temp)
                {
                    int tempr;
                    tempr=s-temp;
                    var=var+tempr;
                    s=s-tempr;
                }
                cout<<var;
            }
            else
            {
                var=0;
                if(s>temp)
                {
                    int tempr;
                    tempr=s-temp;
                    var=var+tempr;
                    s=s-tempr;
                }
                cout<<var;
            }
        }
    }
    else
    {
        if(m==1&&s==0)
        {
            cout<<0;
        }
        else
        {
            cout<<-1;
        }
    }
    cout<<" ";
    if(s1>0&&s1<=range1)
    {
        for(i=0; i<m; i++)
        {
            int var=min(s1,9);
            cout<<var;
            s1=s1-var;
        }
    }
    else
    {
        if(m==1&&s==0)
        {
            cout<<0;
        }
        else
        {
            cout<<-1;
        }
    }
}
