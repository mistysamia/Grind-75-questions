#include <bits/stdc++.h>
using namespace std;

int fx[4] = {1, -1, 0, 0};
int fy[4] = {0, 0, 1, -1};

vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<int>> result(m, vector<int>(n, INT_MAX));
    deque<pair<int, int>> deq;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mat[i][j] == 0)
            {
                result[i][j] = 0;
                deq.push_back({i, j});
            }
        }
    }

    while (!deq.empty())
    {
        auto [x, y] = deq.front();
        deq.pop_front();

        for (int i = 0; i < 4; i++)
        {
            int newX = x + fx[i];
            int newY = y + fy[i];

            if (newX >= 0 && newX < m && newY >= 0 && newY < n && result[newX][newY] > result[x][y] + 1)
            {
                result[newX][newY] = result[x][y] + 1;
                deq.push_back({newX, newY});
            }
        }
    }

    return result;
}