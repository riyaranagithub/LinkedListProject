#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr,int n){
      if(n==0 || n==1){
        return true;
      }
      

      return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);


      
}

int main(){
    vector<int> arr1={2,0,3,4,5};
    cout<<isSorted(arr1,5);
    cout<<endl;
    vector<int> arr2={1,2,3,4,7};
    cout<<isSorted(arr2,5);
    cout<<endl;
    vector<int> arr3={21,23,45,67,78,90};
    cout<<isSorted(arr3,6);
    cout<<endl;
}