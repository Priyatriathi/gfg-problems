//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:
void inorder(vector<int>& v, Node* root) {
    if (root == NULL) {
        return;
    }
    
    inorder(v, root->left);
    v.push_back(root->data);
    inorder(v, root->right);
}

int floor(Node* root, int x) {
    vector<int> a;
    inorder(a, root);
    int n = a.size();
    int l = 0, h = n - 1, ans = -1;
    
    while (l <= h) {
        int m = l + (h - l) / 2;
        if (a[m] <= x) {
            ans = a[m];
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    
    return ans;
}

};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends