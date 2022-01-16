#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main()
{
    long long a,b,n,ans;
    cin>>a>>b>>n;
    long long arr[7];
        arr[1] = (a+MOD) % MOD;
        arr[2] = (b+MOD) % MOD;
        arr[3] = (b-a+MOD) % MOD;
        arr[4] = (-a+MOD) % MOD;
        arr[5] = (-b+MOD) % MOD;
        arr[6] = (a-b+MOD) % MOD;
        n %= 6;

        if (n == 0)
            n = 6;

        ans = (arr[n]+MOD) % MOD;

        cout<<ans;
}
