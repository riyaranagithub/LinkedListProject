#include <iostream>
#include <vector>

using namespace std;

int maxSubArraySum(vector<int> arr){
    
   
   int curr_sum=0;
    int max_sum=0;
    for(int i=0;i<arr.size()-1;i++){
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
           
        }
        max_sum = max(curr_sum,max_sum);
        
     
    }

    return max_sum;
}

int main(){
    vector <int> arr={3,-4,5,4,-1,7,-8};
   cout<<maxSubArraySum(arr);



    return 0;
}