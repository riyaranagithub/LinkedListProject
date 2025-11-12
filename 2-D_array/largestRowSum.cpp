#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int largestRowSum(int arr[][3],int rows,int cols){
    int maxSum = INT_MIN;
    int ans = 0;

    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            ans = i;
        } 
    }

    return ans;
}

int main(){
    int arr[][3] = {{3,4,21}, {2,12,1},{7,8,7}};
    int rows = 3;
    int cols = 3;

    cout<< largestRowSum(arr, rows, cols);
   
        return 0;
}
