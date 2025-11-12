#include <iostream>
#include <vector>

using namespace std;

vector<int> swap(vector<int> &arr){

    for(int i=0;i<arr.size();i=i+2){
        if(i+1<arr.size()){
            swap(arr[i],arr[i+1]);
        }
        
    }

    return arr;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    swap(arr);
    for(int val:arr){
        cout<<val<<" ";
    }
}