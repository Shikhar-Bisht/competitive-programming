// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution
{
public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector <int> ans,c;
        int i,j,p;
        for(i=0; i<n-k+1; i++)
        {
            for(j=i; j<i+k; j++)
            {
                int flag=0;
                for(p=0; p<c.size(); p++)
                {
                    if(A[j]==c[p])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    c.push_back(A[j]);
                }
            }
            int m=c.size();
            ans.push_back(m);
            c.clear();
            cout<<endl;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
