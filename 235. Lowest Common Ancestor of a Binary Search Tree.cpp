#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int i = 0;
TreeNode *createTree(vector<int> &vec)
{
    if (i >= vec.size())
        return nullptr;

    TreeNode *tree = new TreeNode(vec[i++]);

    tree->left = createTree(vec);
    tree->right = createTree(vec);

    return tree;
}

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
        return nullptr;

    if (p->val < root->val && q->val < root->val)
        return lowestCommonAncestor(root->left, p, q);

    if (p->val > root->val && q->val > root->val)
        return lowestCommonAncestor(root->right, p, q);

    return root;
}

int main()
{

    int t = 100;

    while (t--)
    {
        int n, target, k, m;
        vector<int> nums, tums, ans;
        vector<string> str;
        vector<vector<int>> matrix, mat;
        string s, s1;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> k;
            nums.push_back(k);
        }

        TreeNode *root = createTree(nums);
        nums.clear();
        cin >> k;
        nums.push_back(k);
        TreeNode *p = createTree(nums);
        nums.clear();
        cin >> k;
        nums.push_back(k);
        TreeNode *q = createTree(nums);
        TreeNode *reverse = lowestCommonAncestor(root, p, q);
    }
}