#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int l=s.length();
    int var=l/n;
    //cout<<var<<endl;
    //cout<<l%n<<endl;
    if(var==0)
    {
        cout<<"No solution";
    }
    else if(l%n==0)
    {
        if(var>=a&&var<=b)
        {
            int i=0;
            while(i<l)
            {
                int j,temp=i;
                for(j=temp; j<temp+var; j++)
                {
                    cout<<s[j];
                }
                cout<<endl;
                i=i+var;
            }
        }
        else
        {
            cout<<"No solution";
        }
    }
    else
    {
        if(var+1>a&&var+1<=b)
        {
            int i=0,c=l%n;
            while(i<l)
            {
                int j,temp=i;
                if(c>0)
                {
                    for(j=temp; j<temp+var+1; j++)
                    {
                        cout<<s[j];
                    }
                    cout<<endl;
                    i=i+var+1;
                    c--;
                }
                else
                {
                    for(j=temp; j<temp+var; j++)
                    {
                        cout<<s[j];
                    }
                    cout<<endl;
                    i=i+var;
                }
            }
        }
        else
        {
            cout<<"No solution";
        }
    }
}
