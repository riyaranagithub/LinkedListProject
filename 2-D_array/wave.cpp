#include <iostream>
#include <vector>

using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> result;
    for(int j = 0; j < mCols; j++) {
        if(j % 2 == 0) {
            // Even column → top to bottom
            for(int i = 0; i < nRows; i++) {
                result.push_back(arr[i][j]);
            }
        } else {
            // Odd column → bottom to top
            for(int i = nRows - 1; i >= 0; i--) {
                result.push_back(arr[i][j]);
            }
        }
    }
    return result;
}

int main(){
    vector<vector<int>> arr = {{1, 2, 3}, {4,5,6}};
    int nRows = 2;
    int mCols = 3;
    vector<int> result = wavePrint(arr, nRows, mCols);
    for(int v:result){
        cout<<v<<" ";
    }

    return 0;
}