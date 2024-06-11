//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

  bool isContain4(int x){
        while(x){
            int t=x%10;
            if(t==4)
                return(true);
            x/=10;
            
        }
        return(false);
        
    }
    
    
    int countNumberswith4(int N) {
      int ans=0;
      for(int i=1;i<=N;i++){
          if(isContain4(i))
            ans++;
      }
      return(ans);
    }  
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends