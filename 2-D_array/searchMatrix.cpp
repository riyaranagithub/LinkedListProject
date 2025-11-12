#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int nRow = matrix.size();
    int nCol = matrix[0].size();

    int start = 0;
    int end = nRow * nCol - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (matrix[mid / nCol][mid % nCol] == target)
        {
            return true;
        }
        else if (matrix[mid / nCol][mid % nCol] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    cout << searchMatrix(matrix, target) << endl;

    return 0;
}