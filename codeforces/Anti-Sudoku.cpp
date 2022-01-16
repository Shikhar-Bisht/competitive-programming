#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[9][9],i,j;
        for(i=0; i<9; i++)
        {
            string s;
            cin>>s;
            for(j=0; j<9; j++)
            {
                arr[i][j]=s[j]-'0';
            }
        }
        j=0;
        int temp=1;
        //cout<<endl;
        for(i=0; i<9; i++)
        {
            if(j>=9)
            {
                j=temp;
                temp++;
            }
            arr[i][j]++;
            if(arr[i][j]==10)
            {
                arr[i][j]=1;
            }
            j=j+3;
        }
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}
