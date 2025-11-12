#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n)
{
    int largest=INT_MIN,second=INT_MIN;
    for(int i=0;i<n;i++){

        cout<<"arr[i] = "<<arr[i]<<endl<<"Largest = "<<largest<<endl<<"Second = "<<second<<endl<<"----------"<<endl;;
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>second && arr[i] != largest){
            second = arr[i];
        }
    }
    return second;

}

int main(){
   int arr[9]= {1,2,2,3,88,5,8,11,90};
    cout<<secondLargest(arr,9);
}