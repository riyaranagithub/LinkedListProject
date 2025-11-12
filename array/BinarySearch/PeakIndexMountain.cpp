#include <iostream>
#include <vector>

using namespace std;

int peakIndex(vector<int> arr){
    int start = 1;
    int end = arr.size()-2;
    
    while(start<=end){
        int mid= start + (end-start)/2;
        cout<<"start = "<<start<<" end = "<<end<<" mid = "<<mid<<endl;

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }

        if(arr[mid+1]>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }

    }

}

int peak(vector<int> arr){
    int start=0;
    int end  = arr.size();
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
         mid = start+(end-start)/2;
    }
    return arr[start];
}
int main(){
    vector<int> arr={0,1,20,3,2,1,-8};
    cout<<peakIndex(arr)<<endl;
    // cout<<peak(arr);
}