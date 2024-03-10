#include <bits/stdc++.h>
using namespace std;

int fx[4] = {1, -1, 0, 0};
int fy[4] = {0, 0, 1, -1};

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    vector<vector<int>> visited(image.size(), vector<int>(image[0].size(), 0));
    vector<vector<int>> ans = image;

    deque<pair<int, int>> deq;
    int sameColor = image[sr][sc];

    deq.push_back({sr, sc});
    visited[sr][sc] = 1;
    ans[sr][sc] = color;

    while (!deq.empty())
    {
        pair<int, int> top = deq.front();
        deq.pop_front();

        for (int i = 0; i < 4; i++)
        {
            int x = top.first + fx[i];
            int y = top.second + fy[i];

            if (x >= 0 && x < image.size() && y >= 0 && y < image[0].size() && visited[x][y] == 0 && image[x][y] == sameColor)
            {
                visited[x][y] = 1;
                deq.push_back({x, y});
                ans[x][y] = color;
            }
        }
    }
   
    return ans;
}

int main()
{

    int t = 100;

    while (t--)
    {
        int n, target, k, m, sr, sc, color;
        vector<int> nums, tums;
        vector<string> str;
        string s, s1;
        cin >> n >> m;
        vector<vector<int>> matrix(n);
        vector<vector<int>> ans = matrix;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> k;
                matrix[i].push_back(k);
            }
        }
        cin >> sr >> sc >> color;
        ans = floodFill(matrix, sr, sc, color);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";

            cout << endl;
        }
    }
}