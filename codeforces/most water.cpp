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
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		i=0;
		int j=n-1,m=0;
		while(i<j)
		{
			int var=(j-i)*min(arr[i],arr[j]);
			if(var>m)
			{
				m=var;
			}
			if(arr[i]<arr[j])
			{
				i++;
			}
			else
			{
				j--;
			}
		}
		cout<<m<<endl;
	}
}

