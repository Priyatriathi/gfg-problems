//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
int findClosest(int n, int k, int arr[]) {
    int b[n];
    // Calculate absolute differences and store them in b
    for(int i = 0; i < n; i++) {
        b[i] = abs(arr[i] - k);
    }
    // Find the index of the minimum absolute difference in b
    int minIndex = 0;
    for(int i = 1; i < n; i++) {
        if(b[i] <= b[minIndex]) {
            minIndex = i;
        }
    }
    // Return the element in arr corresponding to the minimum absolute difference
    return arr[minIndex];
}
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends