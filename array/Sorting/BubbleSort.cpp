#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int isSwap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {

            return;
        }
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    sort(arr, arr.size());
    for (int val : arr)
    {
        cout << val << " ";
    }
}