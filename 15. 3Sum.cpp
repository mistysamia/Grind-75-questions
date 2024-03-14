#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1]) // Skipping duplicate checking
            continue;

        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1]) // Skipping duplicate checking
                continue;

            int target = 0 - (nums[i] + nums[j]);
            int left = j + 1;
            int right = nums.size() - 1;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target)
                {
                    vector<int> vec;
                    vec.push_back(nums[i]);
                    vec.push_back(nums[j]);
                    vec.push_back(nums[mid]);
                    ans.push_back(vec);
                    break;
                }
                else if (nums[mid] < target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
    }

    return ans;
}
