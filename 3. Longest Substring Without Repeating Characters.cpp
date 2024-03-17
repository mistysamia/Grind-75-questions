int lengthOfLongestSubstring(string s)
{
    map<char, int> mp;
    int len = 0, mxLen = 0, start = 0;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 1)
            len++;
        while (mp[s[i]] > 1)
        {
            mp[s[start++]]--;
            if (mp[s[i]] != 1)
                len--;
        }
        mxLen = max(mxLen, len);
    }
    return mxLen;
}