#include<iostream>
using namespace std;

int main()
{

    long long int t;
    cin>>t;

    while(t--)
    {

        int n,x,y=0;
        cin>>n;


        for(int j=0; j<n; j++)
        {

            cin>>x;

            cout<<(y&(~x))<<' ';

            y=(x^(y&(~x)));

        }

        cout<<endl;


    }


    return 0;
}
