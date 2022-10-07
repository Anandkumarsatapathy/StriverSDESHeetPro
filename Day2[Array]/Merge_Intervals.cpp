vector<vector<int>> merge(vector<vector<int>> &i)
{
    vector<vector<int>> v;
    int n = i.size();
    sort(i.begin(), i.end());

    int s = i[0][0];
    int m = i[0][1];

    // At inital we take the value at compare the value
    for (int j = 1; j < n; j++)
    {
        if (m >= i[j][0])
            m = max(m, i[j][1]);
        else
        {
            v.push_back({s, m});

            s = i[j][0];

            m = i[j][1];
        }
    }
    v.push_back({s, m});
    return v;
}