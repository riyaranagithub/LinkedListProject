#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int end, int mid)

{

    cout<<"Merging " << start << " to " << end << endl;

    vector<int> temp;

    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }


    for (int ind = 0; ind < temp.size(); ind++)
    {
        arr[ind + start] = temp[ind];
    }

    cout<<"After Merging " << start << " to " << end << endl;
    for(int k = start; k <= end; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

void mergeSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start == end)
    {
        return;
    }

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid); // left part
    mergeSort(arr, mid + 1, end); // right part

    merge(arr, start, end, mid);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 10,2, 1, 0};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}