#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    map<int,int> m;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==4)
        {
            m[4]++;
        }
        else if(temp==8)
        {
            if(m[4]>0)
            {
                m[4]--;
                m[8]++;
            }
        }
        else if(temp==15)
        {
            if(m[8]>0)
            {
                m[8]--;
                m[15]++;
            }
        }
        else if(temp==16)
        {
            if(m[15]>0)
            {
                m[15]--;
                m[16]++;
            }
        }
        else if(temp==23)
        {
            if(m[16]>0)
            {
                m[16]--;
                m[23]++;
            }
        }
        else if(temp==42)
        {
            if(m[23]>0)
            {
                m[23]--;
                m[42]++;
            }
        }
    }
    int var=m[42]*6;
    n=n-var;
    cout<<n;
}
