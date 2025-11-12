#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPresent(int arr[][3], int target, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int target = 15;
    cout << isPresent(arr, target, rows, cols) << endl;

    return 0;
}