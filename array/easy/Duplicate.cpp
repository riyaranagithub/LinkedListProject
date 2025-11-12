#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int> arr){
    int duplicate=0;
    for(int i=0;i<arr.size();i++){
        duplicate ^= arr[i];
    }

    for(int i=1;i<arr.size();i++){
        duplicate ^= i;
    }

    return duplicate;
}

int main(){
    vector<int> arr={1,2,3,4,5,3};
    cout<<duplicate(arr);
}