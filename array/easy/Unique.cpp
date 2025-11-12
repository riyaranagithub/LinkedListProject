#include <iostream>
#include <vector>
using namespace std;

int unique(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
       ans ^= arr[i];
    }

    return ans;
}

int main(){
    vector <int> arr={1,4,5,1,5,4,2,2,99}; //99
    vector <int> arr2={1,4,5,1,5,4,2,2,9,3,9,3,6}; //6
    cout<<unique(arr);
    cout<<endl;
    cout<<unique(arr2);
}