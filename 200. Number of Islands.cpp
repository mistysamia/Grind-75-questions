class Solution {
public:
    int fx[4] = {0, 1, 0 ,-1};
    int fy[4] = {-1, 0, 1 ,0};
    void dfs(vector<vector<char>>& grid, int i, int j) 
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
            return;

        grid[i][j] = '0';

        for(int k = 0; k<4; k++)
            dfs(grid, i + fx[k], j + fy[k]);
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        if (grid.size() == 0)
            return 0;
        int ans  = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') 
                {
                    dfs(grid, i, j);
                    ans++;
                }
            }
        }

        return ans;
    }
};