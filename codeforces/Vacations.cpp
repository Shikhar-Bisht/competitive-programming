#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,c=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            c++;
        }
        else if(arr[i]==1||arr[i]==2)
        {
            if(i-1>=0)
            {
                if(arr[i-1]==arr[i])
                {
                    c++;
                    arr[i]=0;
                }
                else if(arr[i-1]==3)
                {
                    if(i-2>=0)
                    {
                        if(arr[i]==1&&arr[i-2]==2)
                        {
                            c++;
                            arr[i]=0;
                        }
                        else if(arr[i]==2&&arr[i-2]==1)
                        {
                            c++;
                            arr[i]=0;
                        }
                    }
                }
            }
        }
        else
        {
            if(i-1>=0)
            {
                if(arr[i-1]==1)
                {
                    arr[i]=2;
                }
                else if(arr[i-1]==2)
                {
                    arr[i]=1;
                }
            }
        }
    }
    /*for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }*/
    //cout<<endl;
    cout<<c;
}
