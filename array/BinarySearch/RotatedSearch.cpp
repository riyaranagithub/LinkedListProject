#include <iostream>
#include <vector>

using namespace std;

int searchRotatedSortedArray(vector<int> arr, int target)

{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // cout << "mid" << mid << endl;

        if (arr[mid] == target)
        {
            return mid;
        }

        // check sorted side

        if (arr[start] <= arr[mid])
        { // left
            if (arr[start] <= target && target <= arr[mid])
            {
                // cout << (arr[start] <= target <= arr[mid]) << endl;

                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        { // right

            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    cout<<searchRotatedSortedArray(arr,10)<<endl;
    cout<<searchRotatedSortedArray(arr,4)<<endl;
    cout<<searchRotatedSortedArray(arr,2)<<endl;

   

    return 0;
}