//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int findPosition(int n) {
        // code here
        int cnt=0,res=0;
        while(n>0)
        {
            if(n%2==1)
            {
                cnt++;
            }
                res++;
             
            n/=2;
        }
        return cnt==1?res:-1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends