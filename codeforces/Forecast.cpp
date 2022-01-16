#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c;
    cin>>a>>b>>c;
    long double temp1=b*b,temp2=4*a*c;
    //cout<<temp1<<" "<<temp2<<endl;
    temp1=temp1-temp2;
    //cout<<temp1<<endl;
    temp1=sqrt(temp1);
    //cout<<temp1<<endl;
    long double ans1=0,ans2=0;
    ans1=ans1-b+temp1;
    ans2=ans2-b-temp1;
    temp1=2*a;
    ans1=ans1/temp1;
    ans2=ans2/temp1;
    //cout<<ans1<<" "<<ans2<<endl;
    long double a1=max(ans1,ans2),a2=min(ans1,ans2);
    printf("%0.16Lf",a1);
    cout<<endl;
    printf("%0.16Lf",a2);
}
