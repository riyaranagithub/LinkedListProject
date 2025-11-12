#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> arr, int mid, int m){
    int stu = 1;
    int pages = 0;

    for(int i=0;i<arr.size();i++){
        if((pages+arr[i])<=mid){
            pages+=arr[i];
        }
        else{
            stu++;
            pages = arr[i];
        }
    }

    cout<<"student for "<<mid<<" is "<<stu<<endl;
    cout<<"-------"<<endl;

    if(stu<=m){
        return true;
    }
    return false;
}

int bookAllocation(vector<int> arr, int m){

    if(m>arr.size()){
        return -1;
    }

    int maxPages=0;
    for(int i=0;i<arr.size();i++){
       maxPages += arr[i];
    }
    cout<<"max pages "<<maxPages<<endl;

    int start = 0;
    int end = maxPages;
    int ans=-1;
    
   while(start<=end){
        int mid = start + (end-start)/2;
        cout<<"mid index "<<mid<<endl;
        if(isValid(arr,mid,m)){
            cout<<"valid "<<endl;
            end=mid-1;
            ans=mid;
            cout<<"ans "<<ans<<endl;
        }
        else{
            start = mid+1;
        }
    }

    return ans;

}


int main(){
    vector <int> arr = {2,1,3,4};
    cout<<bookAllocation(arr,2)<<endl;
}