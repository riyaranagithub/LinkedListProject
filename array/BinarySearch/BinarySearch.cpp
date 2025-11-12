#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){

    int start = 0;
    int end = arr.size();

    while(start<=end){
        int mid = start+(end-start)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
           start = mid+1;
        }
        else{
            end= mid-1;
        }
    }

    return -1;

}

int main(){
    vector<int> arr={12,4,32,76,44,94};
    cout<<binarySearch(arr,32)<<endl;
    cout<<binarySearch(arr,94)<<endl;
    cout<<binarySearch(arr,9)<<endl;
}