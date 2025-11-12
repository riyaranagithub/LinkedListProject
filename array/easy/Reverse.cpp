#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr){
    int i=0,j=arr.size()-1;
      while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
      }

      for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
      }
}

int main(){
  vector <int> arr={1,2,3,4,5,6,-1};
  reverse(arr);
}