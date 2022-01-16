#include<iostream>
#include<string>
#define floop(i,k,n) for(int i=k;i<n;++i)
using namespace std;
int main()
{
    int n,m,i,j;
    char s[n];
    char str[m][4];
    cin>>n>>m;
    cin>>s;
    floop(i,0,m)
        floop(j,0,4)
          cin>>str[i][j];
    floop(i,0,m)
    {
        floop(j,str[i][0],str[i][1])
        {
            if(s[j]==str[i][2])
                s[j]=str[i][3];
        }
    }
    cout<<s;
    return 0;
}
