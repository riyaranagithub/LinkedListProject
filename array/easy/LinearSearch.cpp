#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>arr,int target){
     for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
     }

     return -1;
}

int main(){
    vector<int> arr={2,4,7,5,3,8};
    int result=linearSearch(arr,9);
    if(result>=0){
        cout<<"Element found at:-"<<result<<" index";
    }
    else cout<<"Element not found";

    return 0;
}