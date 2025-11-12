#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//                     **--Brute Force Algorithm--**

// int maxsum(int arr[],int s){
//   int maxsum=0;
//   for(int i=0;i<s;i++){
//     int sum=0;
//     for(int j=i;j<s;j++){
//       sum+=arr[j];
//       maxsum=max(sum,maxsum);
//       cout<<sum<<" ";
//   }
//   cout<<endl;
//   }
//   return maxsum;
// }

//                          **--Kadane's Alogrithm--**

int maxsum(int arr[], int s)
{
  int curr_sum = 0;
  int max_sum = INT_MIN;
  for (int i = 0; i < s; i++)
  {
    curr_sum += arr[i];
    max_sum = max(curr_sum, max_sum);
     if (curr_sum < 0)
      curr_sum = 0;
  }
  return max_sum;
}

int main()
{
  int arr[7] = {-3,-4,5,4,-1,7,-8};
  cout << maxsum(arr, 7);
  return 0;
}
