//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int x)
    {
        sort(a,a+n);
     
      for(int i=0;i<n;i++)
      {
            int l=i+1,h=n-1;
         
            while(l<h)
            {
                int c=a[i]+a[l]+a[h];
                if(c==x)
                return true;
                else if(c>x)
                h--;
                else
                l++;
            }
         
      }
      
    return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends