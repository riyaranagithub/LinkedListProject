#include <iostream>
#include <vector>

using namespace std;

vector <int> printArr(vector<int> arr){
    cout << "[";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << "]";

}

vector<int> firstLastPosition(vector<int> arr, int target)
{
    int first = -1, last = -1;

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            start = mid + 1;
        }
    }

    return {first, last};
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    vector<int> result= firstLastPosition(arr,8);
    printArr(result);
    cout<<endl;
    result= firstLastPosition(arr,6);
    printArr(result);
    cout<<endl;
    result= firstLastPosition(arr,7);
    printArr(result);
    // printArr(firstLastPosition(arr,6))<<endl;
    // printArr(firstLastPosition(arr,7))<<endl;
   
    return 0;
}