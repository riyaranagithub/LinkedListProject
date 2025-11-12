#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> rowSum(int arr[][3],int rows, int cols){
    vector <int> result;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum += arr[i][j];
        }
        result.push_back(sum);
    }

    return result;
}

int main(){
    int arr[][3] = {{3,4,11}, {2,12,1},{7,8,7}};
    int rows = 3;
    int cols = 3;

    vector<int> result = rowSum(arr, rows, cols);
    for(int v: result){
        cout<<v<<" ";
        }

        return 0;
}
