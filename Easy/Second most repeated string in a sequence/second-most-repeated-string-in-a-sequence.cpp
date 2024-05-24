//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int>m;
        string s="";
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
    int max1=INT_MIN,max2;
     for(auto a:m)
      {
          max1=max(max1,a.second);
      }
       for(auto a:m)
      {
          if(a.second<max1 && max2<a.second)
          {
              max2=a.second;
              s=a.first;
          }
      }
      return s;
      
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends