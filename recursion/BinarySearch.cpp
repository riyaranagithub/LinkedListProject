#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end) / 2; 
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
            return binarySearch(arr, target, start, end);
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
            return binarySearch(arr, target, start, end);
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    cout << binarySearch(arr, 3, 0, arr.size() - 1); // 2
    cout << endl;
    cout << binarySearch(arr, 1, 0, arr.size() - 1); // 5

    return 0;
}