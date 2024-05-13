#User function Template for python3

''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:

    def addTwoLists(self, num1, num2):
        s1 = ""
        s2 = ""
        h1 = num1 
        h2 = num2 
        

        while h1:
            s1 += str(h1.data)
            h1 = h1.next
        
    
        while h2:
            s2 += str(h2.data)
            h2 = h2.next
        
        n1 = int(s1)
        n2 = int(s2)
        

        n3 = n1 + n2
        
    
        result = Node(None)
        current = result
        
    
        for char in str(n3):
            new = Node(int(char))
            current.next = new
            current = current.next
        
    
        return result.next



#{ 
 # Driver Code Starts
#Initial Template for Python 3

# Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

# prints the elements of linked list starting with head
def printList(n):
    while n:
        print(n.data,end=' ')
        n = n.next
    print()

if __name__ == '__main__':
    for _ in range(int(input())):
        
        n = int(input())
        arr1 = ( int(x) for x in input().split() )
        num1 = LinkedList()
        for i in arr1:
            num1.insert(i)
        
        m = int(input())
        arr2 = ( int(x) for x in input().split() )
        num2 = LinkedList()
        for i in arr2:
            num2.insert(i)
        
        res = Solution().addTwoLists(num1.head, num2.head)
        printList(res)
# } Driver Code Ends