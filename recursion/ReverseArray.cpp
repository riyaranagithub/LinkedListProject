#include <iostream>
#include <vector>
using namespace std;

vector <int> reverse(vector<int> arr,int i,int j){
   if(i >= j){
    return arr;
   }
   swap(arr[i],arr[j]);
   i++;
   j--;
   return reverse(arr,i,j);
}

int main(){
    vector <int> arr={2,3,5,6,7,4};
    arr=reverse(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val;
    }
}