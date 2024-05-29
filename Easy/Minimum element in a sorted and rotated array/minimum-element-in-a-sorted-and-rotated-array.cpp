//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int a[], int n){
        int l=0,h=n-1;
        int m,ans=INT_MAX;
        while(l<=h)
        {
          m=l+(h-l)/2;
       if(a[l]<=a[m])
       {
       ans=min(ans,a[l]);
       l=m+1;
       }
       else
       {
           ans=min(ans,a[m]);
           h=m-1;
       }
        }
        return ans;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends