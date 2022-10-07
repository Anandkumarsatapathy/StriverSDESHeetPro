int findDuplicate(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    int a;
    for (auto x : m)
    {
        if (x.second >= 2)
            a = x.first;
    }
    return a;
}