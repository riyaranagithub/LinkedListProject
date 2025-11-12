#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector <int> arr){
    int element=arr[0];
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(element==arr[i]){
        count--;
       }

       else if(element != arr[i] && count<1){
           element=arr[i];
       }
       else count--;

       
    }

    return element;
}

int main(){
    vector<int> arr={3,2,2,10,1,2,10,3,3};
    cout<<majorityElement(arr);
}