#include<bits/stdc++.h>
using namespace std;
int main()
{
    typedef std::numeric_limits<double> dbl;
    cout.precision(7);
    //cout<<std::fixed;
    //cout<<std::setprecision(7);
    double n,temp,r,ans;
    double pi=3.141592653589;
    cin>>n>>r;
    double angl;
    temp=n*2;
    angl=360/temp;
    double vr1=pi/180;
    //cout<<vr1;
    angl=angl*vr1;
    //cout<<angl;
    double var=sin(angl);
    //cout<<var;
    ans=(var*r)/(1-var);
    cout<<ans;
}
