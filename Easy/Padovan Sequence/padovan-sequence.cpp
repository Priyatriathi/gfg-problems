//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
     int mod=1e9+7;
    int padovanSequence(int n) {
    if (n == 0 || n == 1 || n == 2)
        return 1;

    int p0 = 1, p1 = 1, p2 = 1, p3;
    
    for (int i = 3; i <= n; ++i) {
        p3 = (p1 + p0)%mod;
        p0 = p1;
        p1 = p2;
        p2 = p3;
    }
    
    return p2%mod;
}

    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends