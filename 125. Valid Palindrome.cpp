#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0, n = s.size() - 1;

    while (i < n)
    {
        char x = tolower(s[i]), y = tolower(s[n]);

        if (isalnum(x) && isalnum(y))
        {
            if (x != y)
                return false;
            else
                i++, n--;
        }
        else if (!isalnum(x))
            i++;
        else if (!isalnum(y))
            n--;
        else
        {
            i++, n--;
        }
    }

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
        getline(cin, s);

        cout << isPalindrome(s) << endl;
    }
}