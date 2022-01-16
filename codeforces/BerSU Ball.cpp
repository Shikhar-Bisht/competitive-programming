#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,c=0;
    cin>>m;
    int boy[m];
    for(i=0;i<m;i++)
        cin>>boy[i];
    cin>>n;
    int girl[n];
    for(i=0;i<n;i++)
        cin>>girl[i];
    sort(boy,boy+m);
    sort(girl,girl+n);
    i=0;
    j=0;
    while(i<m&&j<n)
    {
        if(abs(boy[i]-girl[j])<2)
        {
            i++;
            j++;
            c++;
        }
        else if(boy[i]>girl[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout<<c;
}
