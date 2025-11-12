#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &arr, int m){
    int i = m+1;
    int j=arr.size()-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

 
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int m = 3;
    reverse(arr,m);
    for(int val:arr){
        cout<< val<<" ";
    }
    return 0;
}