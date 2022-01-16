#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c1=0,c2=0,c3=0;
    cin>>n;
    string s;
    cin>>s;
    map<string,int> m;
    for(i=0;i<n;i=i+3)
    {
        if(s[i]=='R')
        {
            m["R1"]++;
        }
        else if(s[i]=='G')
        {
            m["G1"]++;
        }
        else
        {
            m["B1"]++;
        }
        c1++;
    }
    for(i=1;i<n;i=i+3)
    {
        if(s[i]=='R')
        {
            m["R2"]++;
        }
        else if(s[i]=='G')
        {
            m["G2"]++;
        }
        else
        {
            m["B2"]++;
        }
        c2++;
    }
    for(i=2;i<n;i=i+3)
    {
        if(s[i]=='R')
        {
            m["R3"]++;
        }
        else if(s[i]=='G')
        {
            m["G3"]++;
        }
        else
        {
            m["B3"]++;
        }
        c3++;
    }
    int RGB=(c1-m["R1"])+(c2-m["G2"])+(c3-m["B3"]),RBG=(c1-m["R1"])+(c2-m["B2"])+(c3-m["G3"]),GRB=(c1-m["G1"])+(c2-m["R2"])+(c3-m["B3"]),GBR=(c1-m["G1"])+(c2-m["B2"])+(c3-m["R3"]),BRG=(c1-m["B1"])+(c2-m["R2"])+(c3-m["G3"]),BGR=(c1-m["B1"])+(c2-m["G2"])+(c3-m["R3"]);
    //cout<<RGB<<" "<<RBG<<" "<<GRB<<" "<<GBR<<" "<<BRG<<" "<<BGR<<" ";
    int mini=RGB;
    char C1='R',C2='G',C3='B';
    if(RBG<mini)
    {
        mini=RBG;
        C1='R';
        C2='B';
        C3='G';
    }
    if(GRB<mini)
    {
        mini=GRB;
        C1='G';
        C2='R';
        C3='B';
    }
    if(GBR<mini)
    {
        mini=GBR;
        C1='G';
        C2='B';
        C3='R';
    }
    if(BRG<mini)
    {
        mini=BRG;
        C1='B';
        C2='R';
        C3='G';
    }
    if(BGR<mini)
    {
        mini=BGR;
        C1='B';
        C2='G';
        C3='R';
    }
    cout<<mini<<endl;
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
            cout<<C1;
        }
        else if(i%3==1)
        {
            cout<<C2;
        }
        else
        {
            cout<<C3;
        }
    }
}
