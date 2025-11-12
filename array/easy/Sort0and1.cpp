#include <iostream>
#include <vector>

using namespace std;

vector <int> sort01(vector<int> &arr){
    int i=0 , j=arr.size()-1;

    for(int k=0;i<j;k++){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        if(arr[i]!=arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}

int main(){
    vector<int> arr={0,0,1,0,1,1,0,0,0,1,0,1};
    sort01(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}