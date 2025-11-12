#include <iostream>
#include <vector>
using namespace std;

vector <int> intersection(vector <int>arr1, vector <int>arr2){
    vector<int> ans;
    int i=0,j=0;
     for(i;i<arr1.size();i++){
        
        for(j;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                
                ans.push_back(arr1[i]);
                j=j+1;
                break;
            }
            if(arr1[i]<arr2[j]){
                
                break;
            }
        }
     }
return ans;
}

int main(){
    vector<int> arr1={1,2,3,4,5,8,12,18,23};
    vector<int> arr2={3,5,12,20};

    vector<int> result=intersection(arr1,arr2);

    for(int val:result){
        cout<<val<<" ";
    }

}