//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long mod=10e+7;
    int Maximize(int a[],int n)
    {
   sort(a,a+n);
        long long given = 1000000007; 
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(long long)a[i]*i;
        }
        return sum%given;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends