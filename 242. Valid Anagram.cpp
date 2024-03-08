#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size()!= t.size())
        return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t ? true : false ;
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
        cin >> s >> s1;

        cout << isAnagram(s, s1) << endl;
    }
}