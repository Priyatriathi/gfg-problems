#User function Template for python3
class Solution:

    def numberOfConsecutiveOnes (ob,n):
        MOD = int(1e9 + 7)
        if n == 1:
            return 0
        a = [0] * (n + 1) 
        b = [0] * (n + 1)
        a[0] = 1  # One string of length 0 with no consecutive 1's: the empty string
        a[1] = 2  # "0", "1"
        b[1] = 0  # No strings with consecutive 1's of length 1
        for i in range(2, n + 1):
            a[i] = (a[i-1] + a[i-2]) % MOD
            total_strings = pow(2, i, MOD)
            b[i] = (total_strings - a[i] + MOD) % MOD
    
        return b[n]

 
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):

        N = int(input())

        ob = Solution()
        print(ob.numberOfConsecutiveOnes(N))

# } Driver Code Ends