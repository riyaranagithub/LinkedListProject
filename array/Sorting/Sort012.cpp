#include <iostream>
#include <vector>

using namespace std;

// void sort012(vector<int> &arr, int n)
// {
//     int count0 = 0, count1 = 0, count2 = 0;

//     //O(n)
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == 0)
//         {
//             count0++;
//         }
//         else if (arr[i] == 1)
//         {
//             count1++;
//         }
//         else
//         {
//             count2++;
//         }
//     }
//     cout << "0= " << count0 << " 1=" << count1 << " 2=" << count2 << endl;
//     int ind = 0;

//     //combining all three - complexity = O(n)

//     for(int i=0;i<count0;i++){
//         arr[ind++]=0;
//     }
//     for(int i=0;i<count1;i++){
//         arr[ind++]=1;
//     }
//     for(int i=0;i<count2;i++){
//         arr[ind++]=2;
//     }
// }

void sort012(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        { // 0 to low-1
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        { // low to mid-1
            mid++;
        }
        else
        {

            swap(arr[mid], arr[high]); // high+1 to n-1
            high--;
        }
    }
}
int main()
{
    vector<int> arr = {0, 1, 2, 0, 2, 2 ,1, 1, 0, 1, 1, 2, 0};
    sort012(arr, arr.size());
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}