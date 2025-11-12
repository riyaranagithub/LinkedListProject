#include <iostream>
#include <vector>
using namespace std;
//                                   **--Brute force--**

// vector<vector<int>> pairsum(vector<int> nums, int sum)
// {
//     vector<vector<int>> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == sum)
//             {
//                 vector<int> temp;
//                 temp.push_back(nums[i]);
//                 temp.push_back(nums[j]);
//                 ans.push_back(temp);
//             }
//         }
//     }
//     return ans;
// }


//                                **--Opitimised approch--**


vector<vector<int>> pairsum(vector<int> nums, int target)
{
    vector<vector<int>> ans;
   
    int i=0,j=nums.size()-1;
   
    while(i<j){
        int sum=nums[i]+nums[j];
        
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                ans.push_back(temp);
                i++;
                j--;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<vector<int>> result = pairsum(vec, 9);

    for (vector<int> val : result)
    {
        cout << "[";
        for (int vec : val)
        {

            cout << vec;
        }
        cout << "]";
        cout << endl;
    }
   

    return 0;
}