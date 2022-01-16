#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c,d;
        cin>>a>>b;
        int la,lb,i,j,lm,lm1;
        la=a.length();
        lb=b.length();
        int m=la+lb;
        if(la<=lb)
        {
            lm=la;
            c=a;
            d=b;
            lm1=lb;
        }
        else
        {
            lm=lb;
            c=b;
            d=a;
            lm1=la;
        }
        for(i=0;i<lm;i++)
        {
            string var="";
            for(j=i;j<lm;j++)
            {
                var=var+c[j];
                if(d.find(var)!=string::npos)
                {
                    int temp1=d.find(var);
                    int temp=i+lm-(j+1);
                    temp=temp+temp1+(lm1-(var.length()+temp1));
                    if(temp<m)
                    {
                        m=temp;
                    }
                }
            }
        }
        cout<<m<<endl;
    }
}
