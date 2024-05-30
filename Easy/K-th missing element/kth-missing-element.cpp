//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
     int maxi = a[n-1];
    int hash[maxi+1] = {0};
    
    for(int i = 0; i < n; i++) hash[a[i]]++;
    
    for(int i = a[0]; i < maxi+1; i++) {
        if(hash[i] == 0) {
            k--;
            if(k == 0) return i;
        }
    }
    
    return -1;
}