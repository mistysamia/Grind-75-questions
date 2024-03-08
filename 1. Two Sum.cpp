#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, vector<int>> sums;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        sums[nums[i]].push_back(i);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int k = target - nums[i];

        if (sums.find(k) != sums.end())
        {
            if (k == nums[i] && sums[k].size() > 1)
            {
                result.push_back(sums[k][0]);
                result.push_back(sums[k][1]);
                return result;
            }
            else if (k != nums[i])
            {
                result.push_back(i);
                result.push_back(sums[k][0]);
                return result;
            }
        }
    }

    return result;
}

int main()
{

    int t = 100;

    while (t--)
    {
        int n, target, k, m;
        vector<int> nums, tums, ans;
        vector<string> s;
        vector<vector<int>> matrix, mat;
        string s1, s2;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> k;
            nums.push_back(k);
        }
        cin>>k;

        ans = twoSum(nums,k);

        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }
}