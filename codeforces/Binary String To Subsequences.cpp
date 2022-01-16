#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n],prev,c=0;
        queue<int> zero,one;
        for(i=0;i<n;i++)
        {
            char temp;
            cin>>temp;
            if(temp=='1')
            {
                if(zero.empty()==true)
                {
                    c++;
                    arr[i]=c;
                    one.push(c);
                }
                else
                {
                    int var=zero.front();
                    arr[i]=var;
                    zero.pop();
                    one.push(var);
                }
            }
            else
            {
                if(one.empty()==true)
                {
                    c++;
                    arr[i]=c;
                    zero.push(c);
                }
                else
                {
                    int var=one.front();
                    arr[i]=var;
                    one.pop();
                    zero.push(var);
                }
            }
        }
        cout<<c<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
