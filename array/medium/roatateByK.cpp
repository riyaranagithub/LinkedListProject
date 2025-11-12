#include <iostream>
#include <vector>

using namespace std;

vector<int> rotate(vector<int> arr,int k){
    vector<int> ans;
    int n= arr.size();
    for(int i=0;i<n;i++){
        cout<<"value at index "<<(i+k) % n<<" = "<<arr[(i+k)%n]<<endl;
        ans.push_back(arr[(i+k) % n]);
    }
    return ans;
}

int main(){
    vector<int> arr={1,7,9,11};
    int k=2;
    vector<int> ans=rotate(arr,k);
    for(int val:ans){
        cout<<val<<" ";
    }
    
    return 0;
}