int dp[12000];
int coinAdd(vector<int> &coins, long amount)
{
    if (amount < 0)
        return INT_MAX;

    if (amount == 0)
        return 0;

    if (dp[amount] != -1)
        return dp[amount];

    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int res = coinAdd(coins, amount - coins[i]);
        if (res != INT_MAX)
            ans = min(ans, res + 1);
    }

    dp[amount] = ans;
    return ans;
}

int coinChange(vector<int> &coins, int amount)
{
    memset(dp, -1, sizeof dp);
    int ans = coinAdd(coins, amount);
    return ans == INT_MAX ? -1 : ans;
}