/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,h1=0,i;
    scanf("%d:%d",&h,&m);
    //cout<<h<<m<<endl;
    //int var=h;
    for(i=0; i<2; i++)
    {
        h1=h1*10+(var%10);
        var=var/10;
    }
    h1=h%10*10+h/10;
    //cout<<h1;
    if(m<=h1)
    {
        cout<<h1-m;
    }
    else
    {
        h=(h+1)%24;
        //h1=0;
        for(i=0; i<2; i++)
        {
            h1=h1*10+(h%10);
            h=h/10;
        }
        h1=h%10*10+h/10;
        cout<<60-m+h1;
    }
}*/

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,ans=0;
	scanf("%d:%d",&a,&b);
	int a1=a%10*10+a/10;

	while(true){
		if(a1==b) break;
		else{
			ans++;
			b++;
			if(b==60) {
				b=0;
				a++;
				if(a>=24) a=0;
				a1=a%10*10+a/10;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
