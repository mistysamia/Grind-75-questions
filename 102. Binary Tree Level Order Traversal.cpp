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

vector<vector<int>> levelOrder(TreeNode *root)
{
    deque<pair<TreeNode *, int>> deq;
    vector<vector<int>> vec;
    if (root == NULL)
        return vec;

    deq.push_back({root, 0});

    while (!deq.empty())
    {
        pair<TreeNode *, int> temp = deq.front();
        if (temp.second >= vec.size())
            vec.resize(temp.second + 1);

        vec[temp.second].push_back(temp.first->val);

        if (temp.first->left != nullptr)
            deq.push_back({temp.first->left, temp.second + 1});

        if (temp.first->right != nullptr)
            deq.push_back({temp.first->right, temp.second + 1});

        deq.pop_front();
    }

    return vec;
}