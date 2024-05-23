//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
     int l = 0, h = arr.size() - 1;
    int minDiff = INT_MAX;
    std::vector<int> result;

    while (l < h) {
        int sum = arr[l] + arr[h];
        int diff = std::abs(sum - x);

        // Update result if the current sum is closer to x
        if (diff < minDiff) {
            minDiff = diff;
            result = {arr[l], arr[h]};
        }

        // Move pointers based on the comparison with x
        if (sum < x) {
            l++;
        } else {
            h--;
        }
    }

    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends