#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,sum=0;
        cin>>n>>m;
        int arr[n];
        int mi,var;
        for(i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            arr[i]=temp;
            sum=sum+2*temp;
            if(i==0)
            {
                var=temp;
                mi=1;
            }
            else
            {
                if(temp<var)
                {
                    var=temp;
                    mi=i+1;
                }
            }
        }
        int mi1=-1,var1=-1;
        if(n==2||m<n)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(m>n)
            {
                for(i=0; i<n; i++)
                {
                    if(i==mi-1)
                        continue;
                    if(mi1==-1)
                    {
                        mi1=i+1;
                        var1=arr[i];
                    }
                    if(arr[i]<var1)
                    {
                        var1=arr[i];
                        mi1=i+1;
                    }
                }
            }
            else
            {
                var1=0;
            }
            //cout<<mi1<<" "<<var1<<endl;
            int temp=(m-n)*(var+var1);
            cout<<sum+temp<<endl;
            for(i=1; i<n; i++)
            {
                cout<<i<<" "<<i+1<<endl;
            }
            cout<<1<<" "<<n<<endl;
            for(i=0; i<m-n; i++)
            {
                cout<<mi<<" "<<mi1<<endl;
            }
        }
    }
}
