#include <iostream>
#include <vector>

using namespace std;

vector <int> mergeArr(vector<int> arr1,vector<int> arr2){

    int i= 0 ;
    int j=0;
vector<int> ans;
while(i<arr1.size() && j<arr2.size()){
    if(arr2[j]>=arr1[i]){
        ans.push_back(arr1[i]);
        i++;
    }

    else{
        ans.push_back(arr2[j]);
        j++;
    }
}

while(i<arr1.size()){
    ans.push_back(arr1[i]);
    i++;
}
while(j<arr2.size()){
    ans.push_back(arr2[j]);
    j++;
}
  return ans;  
}

vector <int> merge(vector<int> arr1, vector<int> arr2,int m,int n ){
    int i = m-1;
    int j=n-1;
    int k = (m+n)-1;


    while(i>=0 && j>=0){
         if(arr1[i]>=arr2[j]){
        arr1[k--] = arr1[i--];
    }
    else{
        arr1[k--] = arr2[j--];
    }
    }

    while(j>=0){
        arr1[k--]=arr2[j--];
    }

    return arr1;
   
}



int main(){
    vector<int> arr1={7,8,9,0,0,0};
    vector<int> arr2={2,5,6};

    // vector<int> result = mergeArr(arr1,arr2);
    // for(int val:result){
    //     cout<<val<<" ";
    // }
    vector<int> result = merge(arr1,arr2,3,3);
    for(int val:result){
        cout<<val<<" ";
    }

    return 0;
}