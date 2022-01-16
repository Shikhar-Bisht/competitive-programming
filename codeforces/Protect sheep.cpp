#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int x,y,i,j,n=0;
    cin>>x>>y;
    char a[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            {
                cin>>a[i][j];
            }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
            {
                if(a[i][j]=='S')
                {
                if(a[i+1][j]=='W'||a[i-1][j]=='W'||a[i][j+1]=='W'||a[i][j-1]=='W')
                {
                    cout<<"No";
                    n=1;
                    break;
                }
                }
                if(a[i][j]!='S'&&a[i][j]!='W')
                {
                    a[i][j]='D';
                }
            if(n==1)
            {
                break;
            }
            }
    }
    if(n==0)
    {
        cout<<"Yes"<<endl;
    for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
