class Solution
{
public:
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K)
    {
        // add code here.

    }
    void inorder(Node *root, int K, int &count, int &ans)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, K, count, ans);
        count++;
        if (count == K)
        {
            ans = root->data;
            return;
        }
        inorder(root->right, K, count, ans);
    }
};
