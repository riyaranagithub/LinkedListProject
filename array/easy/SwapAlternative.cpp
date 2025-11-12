#include <iostream>
#include <vector>
using namespace std;

vector <int> swapAlternate(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }

    return arr;
}

int main(){
    vector <int> arr={2,5,4,7,8};
    swapAlternate(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}