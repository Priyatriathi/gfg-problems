#User function Template for python3

class Solution:
    def multiplyStrings(self,s1,s2):
        s1=int(s1)
        s2=int(s2)
        n=s1*s2
        n=str(n)
        return n
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        a,b=input().split()
        print(Solution().multiplyStrings( a.strip() , b.strip() ))

# } Driver Code Ends