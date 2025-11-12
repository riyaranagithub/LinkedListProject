#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// arr={1,2,2,1,1,3};
// 1 - 3
// 2 - 2
// 3 - 1

bool findUnique(vector<int> arr){
      sort(arr.begin(),arr.end());
      vector<int> countArr;
     
     
      for(int i=0;i<arr.size();i++){
        int count=1;
        while(i+1<arr.size() && arr[i]==arr[i+1]){
            count++;
            i++;
        }
        countArr.push_back(count);
        
           
      }
      sort(countArr.begin(),countArr.end());
      for(int i=0;i<countArr.size()-1;i++){
        if(i+1<countArr.size() && countArr[i]==countArr[i+1]){
            return false;
        }
      }
      return true;
      

}

int main(){
    // vector<int> arr={1,2,2,1,1,3};
    // cout<<findUnique(arr);
    vector<int> arr={1,2};
    cout<<findUnique(arr);
}