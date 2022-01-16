#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int var1=i;
        int var2=arr[i];
        //cout<<var1<<" "<<var2<<endl;
        while(var2!=var1+1)
        {
            //cout<<var1<<" "<<var2<<endl;
            int m=arr[var1];
            for(j=var1;j<var2;j++)
            {
                if(m<arr[j])
                {
                    m=arr[j];
                    //cout<<m<<endl;
                }
            }
            //cout<<var1<<" "<<var2<<endl;
            var1=var2-1;
            var2=m;
        }
        c++;
        i=var2-1;
    }
    cout<<c;
    return 0;
}
