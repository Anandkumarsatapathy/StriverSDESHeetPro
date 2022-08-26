class Solution
{
public:
    // TC: O(2^(NxM))
    // SC: O(M+N) for recursive stack
    int pathRobotRes(int i, int j)
    {
        if (i == 0 && j == 0)
        {
            return 1;
        }
        if (i < 0 || j < 0)
        {
            return 0;
        }
        int up = pathRobotRes(i - 1, j);
        int left = pathRobotRes(i, j - 1);
        return up + left;
    }
    //  TC: O(MxN)
    // SC: O(M+N) + O(MxN) for recursive stack and dp hashmap
    int pathRobotMem(int i, int j, vector<vector<int>> &dp)
    {
        // base case
        if (i == 0 && j == 0)
        {
            return 1;
        }
        if (i < 0 || j < 0)
        {
            return 0;
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        int up = pathRobotMem(i - 1, j, dp);
        int left = pathRobotMem(i, j - 1, dp);
        return dp[i][j] = up + left;
    }
    // TC: O(MxN)
    // SC: O(MxN) for 2D dp array
    int pathRobotTab(int i, int j)
    {
        int m = i;
        int n = j;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    int up = 0;
                    int left = 0;
                    if (i > 0)
                        up = dp[i - 1][j];
                    if (j > 0)
                        left = dp[i][j - 1];
                    dp[i][j] = up + left;
                }
            }
        }
        for (auto x : dp)
        {
            for (auto y : x)
            {
                cout << y << "        ";
            }
            cout << endl;
        }
        return dp[m - 1][n - 1];
    }

    int uniquePaths(int m, int n)
    {
        int solution;
        // solution = pathRobotRes(m-1,n-1);
        // vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        // solution = pathRobotMem(m-1,n-1,dp);
        solution = pathRobotTab(m, n);

        return solution;
    }
};