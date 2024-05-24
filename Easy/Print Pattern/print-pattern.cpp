//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void print(int n,vector<int> &store){
        if(n<=0) return store.push_back(n);
        store.push_back(n);
        print(n-5,store);
        store.push_back(n);
    }
    
    vector<int> pattern(int n){
        // code here
        vector<int> store;
        print(n,store);
        return store;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends