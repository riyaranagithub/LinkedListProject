#include <iostream>
#include <vector>

using namespace std;

vector <int> removeDuplicate(vector<int> arr){
    int j=0;
    vector <int> ans;
    ans.push_back(arr[0]);
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
            ans.push_back(arr[j]);
            
        }
    }

    return ans;
}


int main(){
    vector <int> arr={1,1,3,3,4,4,5,6,6,7,7,7};
    vector<int> result = removeDuplicate(arr);

    for(int val:result){
        cout<<val<<" ";
    }

    return 0;
}