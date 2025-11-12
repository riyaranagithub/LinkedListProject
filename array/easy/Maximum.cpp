#include <iostream>
#include <vector>
#include <climits>

using namespace std;


//Largest Element in the array

int maximumElement(vector<int> arr){
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    return max;
}

int main(){
    vector <int> arr={2,3,5,1,7,5};
    cout<<maximumElement(arr);
}