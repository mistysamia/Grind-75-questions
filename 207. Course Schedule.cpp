bool dfs(int course, vector<vector<int>> &vec, vector<int> &visited)
{
    if (visited[course] == 1)
        return false;

    if (visited[course] == 0)
    {
        visited[course] = 1;
        for (int i = 0; i < vec[course].size(); i++)
        {
            if (!dfs(vec[course][i], vec, visited))
                return false;
        }
    }
    visited[course] = -1;
    return true;
}

bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{
    vector<vector<int>> vec(numCourses);
    vector<int> visited(numCourses, 0);

    for (int i = 0; i < prerequisites.size(); i++)
        vec[prerequisites[i][0]].push_back(prerequisites[i][1]);

    for (int i = 0; i < numCourses; ++i)
    {
        if (!visited[i] && !dfs(i, vec, visited))
            return false;
    }

    return true;
}