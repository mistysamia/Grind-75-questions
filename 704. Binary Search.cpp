#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (right + left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
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

        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> m;
            nums.push_back(m);
        }

        cout << search(nums, k) << endl;
    }
}