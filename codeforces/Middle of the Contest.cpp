#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,time,h3,m3;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    time=(h2-h1)*60+(m2-m1);
    time=time/2;
    time=time+m1;
    m3=time%60;
    h3=h1+time/60;
    printf("%02d:%02d",h3,m3);
    /*if(h3>9&&m3>9)
    {
        cout<<h3<<":"<<m3;
    }
    else if(h3<10&&m3<10)
    {
        cout<<"0"<<h3<<":"<<"0"<<m3;
    }
    else if(h3<10)
    {
        cout<<"0"<<h3<<":"<<m3;
    }
    else if(m3<10)
    {
        cout<<h3<<":"<<"0"<<m3;
    }*/
    return 0;
}
