#include <iostream>
#include <vector>

using namespace std;

void rotate (vector<int> &arr){
    int s=arr.size();
      int temp = arr[s-1];
    for(int i=s-1;i>=1;i--){
      
        arr[i]=arr[i-1];
        
    }
    arr[0]=temp;

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
}

void rotateByK(vector<int>&arr, int k){
    for(int i=0;i<k;i++){
        rotate(arr);
        }

  
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateByK(arr, 2);
    for(int val:arr){
        cout << val << " ";
    }

    return 0;
}