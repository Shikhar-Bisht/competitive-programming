#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,y1,x2=0,y2=0,cou=0,a=0,b=0,c=0,d=0,var=0;
    cin>>x1>>y1;
    while(x2!=x1&&y2!=y1)
    {
        a=sqrt(pow((x1-(x2-1)),2)+pow((y1-y2),2));
        b=sqrt(pow((x1-(x2+1)),2)+pow((y1-y2),2));
        c=sqrt(pow((x1-x2),2)+pow((y1-(y2-1)),2));
        d=sqrt(pow((x1-x2),2)+pow((y1-(y2+1)),2));
        if(a<=b&&a<=c&&a<=d)
        {
            x2=x2-1;
        }
        else if(b<=a&&b<=c&&b<=d)
        {
            x2=x2+1;
        }
        else if(c<=b&&c<=a&&c<=d)
        {
            y2=y2-1;
        }
        else
        {
            y2=y2+1;
        }
        cou=cou+1;
    }
    cout<<cou;
}
