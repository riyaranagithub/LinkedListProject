#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <climits>

using namespace std;

int maximumFrequency(vector<int> &arr, int n) {
    map<int,int> count;
    int maxFrequency=0;
   
    for(int i=0;i<n;i++){
        count[arr[i]]++;
        
        maxFrequency = max(maxFrequency,count[arr[i]]);
    }
    for(int i:arr){
      
       if(maxFrequency == count[i]){
        return i;
        }

    }
  

}
int main(){
    vector<int> arr = {4 ,-5, 1 };
    int n = arr.size();
    int max = maximumFrequency(arr, n);
    cout << "Maximum frequency element is " << max << endl;

    return 0;
}