#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool isValid(vector<int> arr,int mid, int m,int k){
    int flowers=0,bouquet=0;

    for(int i=0;i<arr.size();i++){
cout<<"mid "<<mid<<" arr[i] "<<arr[i]<<endl;
        if(mid>=arr[i]){
            
             flowers++;
             if(flowers == k){
                bouquet++;
                flowers=0;
             }
             cout<<"flowers "<<flowers<<" bouquet "<<bouquet<<"--------"<<endl;
        }
        else{
            flowers=0;
        }
       
    }
    cout<<"boquets "<<bouquet<<endl;

  return bouquet>=m;
   
}

int minimumDays(vector<int> arr, int m, int k){
    int minDay= INT_MAX ;
    int maxDays = INT_MIN;
    for (int i=0;i<arr.size();i++){
        minDay = min(minDay,arr[i]);
        maxDays = max(maxDays,arr[i]);
    }
    int start = minDay;
    int end = maxDays;
    int ans=-1;

    cout<<"start "<<start<<" end "<<end<<endl;

    while(start<=end){
        int mid = start + (end-start)/2;
        // cout<<"mid "<<mid<<endl;
        if(isValid(arr,mid,m,k)){
            cout<<"valid"<<endl;
            end = mid-1;
            ans = mid;
        }
        else{
            start = mid+1;
        }
    }
    cout<<"ans "<<ans<<endl;
    return ans;
}

int main(){
    vector <int> arr1={1,10,3,10,2};
    vector <int> arr2={7,7,7,7,12,7,7};
    // cout<<minimumDays(arr1,3,1);
    cout<<minimumDays(arr2,2,3);
}