#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s)
{
    map<char, int> mp;
    int ans = 0, cnt = 0;

    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % 2 == 0)
            ans += it->second;
        else
        {
            ans += it->second - 1;
            cnt = 1;
        }
    }
    ans += cnt;

    return ans;
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
        cin >> s;

        cout << longestPalindrome(s) << endl;
    }
}