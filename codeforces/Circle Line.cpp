#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    int total_sum=0; //for sum of all the array
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        total_sum=total_sum+arr[i];
    }
    a=a-1;
    b=b-1;
    int var1,var2;
    if(a<b)
        {
            var1=a;
            var2=b;
        }
    else
        {
            var1=b;
            var2=a;
        }
    for(i=var1;i<var2;i++)
        sum1=sum1+arr[i];
    sum2=total_sum-sum1;
    if(sum1<sum2)
        cout<<sum1;
    else
        cout<<sum2;
    return 0;
}

