#include<bits/stdc++.h>
using namespace std;
bool iscomp(int a)
{
    int i,c=0;
    for(i=1; i<a; i++)
    {
        if(a%i==0)
        {
         c=c+1;
        }
    }
    if(c>=2)
        return false;
    else
        return true;
}
int main()
{
    int d,a,b;
    cin>>d;
    a=d+4;
    b=4;
    while(iscomp(a) || iscomp(b))
    {
        ++a;
        ++b;
    }
    cout<<a<<" "<<b;
    return 0;

}
