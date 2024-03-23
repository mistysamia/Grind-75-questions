int fx[4] = {-1, 0, 1, 0};
int fy[4] = {0, -1, 0, 1};

int orangesRotting(vector<vector<int>> &grid)
{
    deque<pair<int, int>> deq;
    int freshOranges = 0, min = -1;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 2)
                deq.push_back({i, j});
            else if (grid[i][j] == 1)
                freshOranges++;
        }
    }

    if (freshOranges == 0)
        return 0;

    while (!deq.empty())
    {
        min++;
        int deqSize = deq.size();
        for (int k = 0; k < deqSize; k++)
        {
            pair<int, int> top = deq.front();
            deq.pop_front();

            for (int i = 0; i < 4; i++)
            {
                int x = top.first + fx[i];
                int y = top.second + fy[i];

                if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1)
                {
                    deq.push_back({x, y});
                    grid[x][y] = 2;
                    freshOranges--;
                }
            }
        }
    }

    if (freshOranges > 0)
        return -1;

    return min;
}