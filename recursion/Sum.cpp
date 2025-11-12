#include <iostream>
using namespace std;

int sum(int n){
    int ans=n;

    if(n==1){
        return 1;
    }

    ans += sum(n-1);

    return ans;
}

int arraySum(int arr[],int n){
    if(n==1){
        return arr[n-1];
    }

    return arr[n-1] + arraySum(arr,n-1);
}

int main(){
    cout<<sum(4)<<endl;
    int arr[5]={2,3,5,1};
    cout<<arraySum(arr,5);

    return 0;
}