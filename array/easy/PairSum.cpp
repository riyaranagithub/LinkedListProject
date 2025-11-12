#include <iostream>
#include <vector>

using namespace std;

vector <vector<int>> pairSum(vector<int> arr,int sum){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
    }

    return ans;
}

int main(){
    vector<int> arr={2,3,1,6,7,5,9,10,13};
    vector<vector<int>> result =pairSum(arr,7);

    for(vector<int> val:result){
         cout<<"{";
      for(int a:val){
       
        cout<<a<<" ";
       
      }
       cout<<"}";
       cout<<endl;
    }
    return 0;

}