#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int n = (nums.size() / 3);
    map<int, int> m;
    for (auto x : nums)
    {
        m[x]++;
    }
    int ma = INT_MAX;
    int a;
    for (auto x : m)
    {

        if (x.second > n)
        {
            a = x.first;
            break;
        }
    }
    cout << a << endl;

    return 0;
}
