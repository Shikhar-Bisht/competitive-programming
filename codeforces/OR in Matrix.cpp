#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    int B[m][n],A[m][n],row[m]={0},cols[n]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>B[i][j];
            if(B[i][j]==0)
            {
                row[i]=1; //keeping track which row in A should contain only 0s
                cols[j]=1;//keeping track which column in A should contain only 0s
            }
        }
    }
    memset(A,-1,sizeof(A));
    for(int i=0;i<m;i++)
    {
        if(row[i])
        {
            //if row[i] is 0 that particular row is 0.We are setting that
            for(int j=0;j<n;j++)
            A[i][j]=0;
            row[i]=0;  //since that row contains 0 it's OR value will also be 0.We are actually saving the result of OR in the row array itself since it will not mess up other calculations.
        }
    }
    for(int i=0;i<n;i++)
    {
        if(cols[i])
        {
            //similarly for columns as rows
            for(int j=0;j<m;j++)
            A[j][i]=0;
            cols[i]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==-1)  //those cells in A containing no 0 are filled with 1.In that case,that row and that columnof that cell will have OR value 1.
            {
                A[i][j]=1;
                cols[j]=1;
                row[i]=1;
            }
        }
    }
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //checking whether the B obtained from A we constructed above matches with the given B
            if((row[i]|cols[j])!=B[i][j])
            {
                flag=1;
                //cout<<row[i]<<" "<<cols[j]<<endl;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)  //printing A
        {
            for(int j=0;j<n;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
