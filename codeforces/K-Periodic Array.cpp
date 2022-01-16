#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int ss[105];

int num;
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);

	for(int i = 1 ;i <= n ; i++)
	scanf("%d",&ss[i]);

	int ct = 0;
	for(int i = 1 ; i <= k ;i++)
	{
		int sum = 0;
		for(int j = i ; j <= n ;j+=k)
		{
			if(ss[j] == 1) sum++;
		}
		ct +=min(sum,n/k-sum);
	}
	printf("%d\n",ct);
	return 0;
}

