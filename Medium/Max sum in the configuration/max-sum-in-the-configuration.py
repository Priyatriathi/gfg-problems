#User function Template for python3

def max_sum(a,n):
    curr = sum(i * a[i] for i in range(n))
    total = sum(a)
    max_val = curr

    for i in range(1, n):
        curr += total - n * a[-i]
        max_val = max(max_val, curr)

    return max_val


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(max_sum(arr, n))

# } Driver Code Ends