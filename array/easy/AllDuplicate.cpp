#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findDuplicates(vector<int> arr){
    vector <int> duplicates;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int count =1;
         while(i+1<arr.size() && arr[i]==arr[i+1]){
            count++;
            i++;
         }

         if(count==2){
            duplicates.push_back(arr[i-1]);
         }

    }

    return duplicates;

}

int main(){
    // vector<int> arr={4,3,2,7,8,2,3,1};
    // vector<int> result = findDuplicates(arr);
    // for(int val:result){
    //     cout<<val<<" ";
    // }
    vector<int> arr={1,1,2,4,4,4};
    vector<int> result = findDuplicates(arr);
    for(int val:result){
        cout<<val<<" ";
    }
}