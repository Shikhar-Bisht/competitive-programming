#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,i,b;
    cin>>a;
    queue<int> s1,s2;
    for(i=0; i<a; i++)
    {
        int temp;
        cin>>temp;
        s1.push(temp);
    }
    cin>>b;
    for(i=0; i<b; i++)
    {
        int temp;
        cin>>temp;
        s2.push(temp);
    }
    int var1=s1.front(),var2=s1.back(),var3=s2.front(),var4=s2.back(),flag=0;
    long long c=0;
    while(!s1.empty()&&!s2.empty())
    {
        int t1,t2;
        t1=s1.front(),t2=s2.front();
        if(c>=pow(10,5))
        {
            flag=1;
            break;
        }
        s1.pop();
        s2.pop();
        if(t1>t2)
        {
            s1.push(t2);
            s1.push(t1);
        }
        else
        {
            s2.push(t1);
            s2.push(t2);
        }
        //cout<<t1<<" "<<t2<<endl;
        c++;
    }
    if(flag==0)
    {
        cout<<c<<" ";
        if(s1.empty()==true)
        {
            cout<<2;
        }
        else
        {
            cout<<1;
        }
    }
    else
    {
        cout<<-1;
    }
}
