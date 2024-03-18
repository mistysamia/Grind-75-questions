struct Compare
{
    bool operator()(const pair<float, vector<int>> &p1, const pair<float, vector<int>> &p2) const
    {
        return p1.first > p2.first;
    }
};

vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    vector<vector<int>> ans;
    priority_queue<pair<float, vector<int>>, vector<pair<float, vector<int>>>, Compare> pq;

    for (int i = 0; i < points.size(); i++)
    {
        int x = points[i][0];
        int y = points[i][1];
        float distance = sqrt((x * x) + (y * y));
        pq.push({distance, points[i]});
    }

    while (!pq.empty() && k)
    {
        vector<int> vec = pq.top().second;
        ans.push_back(vec);
        k--;
        pq.pop();
    }

    return ans;
}