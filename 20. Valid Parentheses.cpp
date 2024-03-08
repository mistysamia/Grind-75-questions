#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    deque<char> deq;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            deq.push_back(s[i]);
        else if (s[i] == ')')
        {
            if (!deq.empty() && deq.back() == '(')
                deq.pop_back();
            else
                return false;
        }
        else if (s[i] == '}')
        {
            if (!deq.empty() && deq.back() == '{')
                deq.pop_back();
            else
                return false;
        }
        else
        {
            if (!deq.empty() && deq.back() == '[')
                deq.pop_back();
            else
                return false;
        }
    }

    if (!deq.empty())
        return false;

    return true;
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

        cout << isValid(s) << endl;
    }
}