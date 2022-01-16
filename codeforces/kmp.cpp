#include<bits/stdc++.h>
using namespace std;
void computeLPS(int n,string pat,int* lps)
{
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}
void KMPsearch(string txt,string pat)
{
    int m,n;
    m=txt.length();
    n=pat.length();
    int lps[n];
    computeLPS(n,pat,lps);
    int i=0,j=0,c=0;
    while(i<m)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==n)
        {
            c++;
            j=lps[j-1];
        }
        else if(i<m&&pat[j]!=txt[i])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            {
                i=i+1;
            }
        }
    }
    cout<<c;

}
int main()
{
    string txt,pat;
    cin>>txt>>pat;
    KMPsearch(txt,pat);
    return 0;
}
