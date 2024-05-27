//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
     int solve(int index, vector<int> &arr, int prev){
        if(index < 0)   return 0;
        
        int nontake = solve(index-1, arr, prev);
        int take = 0;
        if(prev == -1 || (abs(arr[index]-arr[prev]) == 1)){
            take = 1 + solve(index-1, arr, index);
        }
        return max(take, nontake);
    }
    int longestSubseq(int n, vector<int> &a){
        return solve(n-1, a, -1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends