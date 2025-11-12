#include <iostream>
using namespace std;

bool search(int arr[],int n,int target){
    if(n==0){
        return false;
    }
    else if(arr[0]==target){
        return true;
    }
    else{
      return  search(arr+1,n-1,target);
    }
}

int main(){
    int arr[5]={2,4,1,5,3};
    int target = 3;
    cout<<search(arr,5,target)<<endl;

    return 0;
}