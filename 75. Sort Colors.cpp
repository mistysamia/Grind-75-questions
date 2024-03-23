void sortColors(vector<int> &nums)
{
    int color[4];
    memset(color, 0, sizeof color);

    for (int i = 0; i < nums.size(); i++)
    {
        color[nums[i]]++;
    }

    int j = 0;

    for (int i = 0; i < nums.size();)
    {
        int n = color[j];
        while (n--)
            nums[i++] = j;
        j++;
    }

    return;
}