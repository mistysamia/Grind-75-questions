#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buy = INT_MAX, sell = 0;

    for (int i = 0; i < prices.size(); i++)
    {
        buy = min(buy, prices[i]);
        sell = max(sell, prices[i] - buy);
    }
    return sell;
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

        cout << maxProfit(nums) << endl;
    }
}