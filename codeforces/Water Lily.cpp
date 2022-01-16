#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,l,ans;
    cin>>h>>l;
    ans=(l*l-h*h)/(2*h);
    //printf("%.13lf",ans);
    cout<<fixed;
    cout<<setprecision(13);
    cout<<ans;
    return 0;
}
