#include<bits/stdc++.h>
using namespace std;
int n,a[15];
int init(int x)
{
    int cnt=0;
    while(x){
        a[++cnt]=x%10;
        x/=10;
    }
    return cnt;
}
int main()
{
    cin>>n;
    int len=init(n);
    int ans=100;
    for(int i=(1<<len)-1;i>=0;i--){
        int tmp=0,cnt=0,flag=1;
        for(int j=len-1;j>=0;j--){
                //cout<<(i>>j)&1<<endl;
            if((i>>j)&1){
                //cout<<a[j+1]<<" "<<i<<" "<<j<<"    ";
                cnt++;
                tmp=tmp*10+a[j+1];
                if(tmp==0){
                    flag=0;
                    break;
                }
            }
        }
        //cout<<tmp<<endl;
        if(tmp&&flag&&(int(sqrt(tmp))*int(sqrt(tmp))==tmp)){
            ans=min(ans,len-cnt);
        }
    }
    if(ans!=100) printf("%d\n",ans);
    else  printf("-1\n");
    return 0;
}
