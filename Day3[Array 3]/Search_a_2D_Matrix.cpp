#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>&m,int target)
{
    int low = 0;
    int row = m.size();
    int col = m[0].size();
    int high = row*col -1;
    while(low<col && high>row){
        int mid = (low+high)/2;
        int v = m[mid/col][mid%col];
        if(target>v){
            low = mid+1;
        }else if(target<v)
        {
            high = mid-1;
        }else{
            return true;
        }

    }
    return false;


}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cin >> target;
    bool solution;
    solution = searchMatrix(matrix, target);
    cout << solution << endl;

    return 0;
}