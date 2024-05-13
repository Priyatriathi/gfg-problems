//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
        int c=0,m=0;
    while(m<d)
    {
     c++;
     m=m+c;
     }
      if(m==d)
      return c;
      int diff=m-d;
      if(diff%2==0)
      return c;
      return c%2==0?c+1:c+2;
      
    
 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends