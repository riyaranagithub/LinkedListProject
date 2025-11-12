#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//                                     **--Brute Force approch--**

// int majorityElement(vector<int> &nums){

//     for(int val:nums){
//         int count=0;
//         for(int elem:nums){
//             if(val==elem){
//               count++;
//             }
//         }
//         if(count>nums.size()/2){
//            return val;

//         }
//     }

// }

//                                     **--Optimised approch--**

// int majorityElement(vector<int> &nums){

//     sort(nums.begin(),nums.end());
//     int count=1;
//    for(int i=0;i<nums.size();i++){

//     // cout<<"i and i+1 "<<nums[i]<<" "<<nums[i+1]<<endl;
//     if(nums[i]==nums[i+1]){
//        count++;
//     }
//     else{
//         count=1;
//     }
//     // cout<<"count= "<<count<<endl;
//     if(count>nums.size()/2){
//         return nums[i];
//     }
//    }

// }
//                               **--Moore's Voting Algorithm--**

int majorityElement(vector<int> &nums)
{

   
    int count = 0,ans=0;
    for (int i = 0; i < nums.size(); i++)
    {
       if(count==0){
        ans=nums[i];
       }

       if(ans==nums[i]){
        count++;
       }
       else{
        count--;
       }
    }

    //edge case - no majority element - {1,2,3,4}

    int freq =0;
    for(int val: nums){
        if(val==ans){
            freq++;
        }
    }
    if(freq>nums.size()/2){
        return ans;
    }
    return -1;

   
}

int main()
{

    vector<int> arr1 = {3, 3, 2, 2, 3, 3, 2};
    cout << "Majority element is : ";
    cout << majorityElement(arr1) << endl;

    vector<int> arr2 = {3, 3, 2, 2, 2, 2};
    cout << "Majority element is : ";
    cout << majorityElement(arr2) << endl;

    vector<int> arr3 = {3, 3, 2, 1, 1, 1, 1};
    cout << "Majority element is : ";
    cout << majorityElement(arr3)<<endl;

    vector<int> arr4 = {1,2,3,4};
    cout << "Majority element is : ";
    cout << majorityElement(arr4);
    return 0;
}