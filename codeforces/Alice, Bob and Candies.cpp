#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,varl=0,varr=0,flag=0,templ=0,tempr=0,mov=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        j=n-1;
        while(i<=j)
        {
            if(flag==0)
            {
                templ=0;
                while(templ<=tempr&&i<=j)
                {
                    templ=templ+arr[i];
                    i++;
                }
                //cout<<"Templ ="<<templ<<endl;
                flag=1;
                varl=varl+templ;
                mov++;
            }
            else
            {
                tempr=0;
                while(tempr<=templ&&i<=j)
                {
                    tempr=tempr+arr[j];
                    j--;
                }
                flag=0;
                //cout<<"Tempr ="<<tempr<<endl;
                varr=varr+tempr;
                mov++;
            }
        }
        cout<<mov<<" "<<varl<<" "<<varr<<endl;
    }
}
