#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int mx = INT_MIN, sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        mx = max(mx, sum);
        if (sum < 0)
            sum = 0;
    }

    return mx;
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

        cout << maxSubArray(nums) << endl;
    }
}