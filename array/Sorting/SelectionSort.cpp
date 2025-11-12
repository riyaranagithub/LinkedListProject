#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i +1; j < n ; j++)
        {

            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
            cout<<"smallestIndex "<<smallestIndex<<endl;
        }
     
        if (arr[i] > arr[smallestIndex])
        {
            swap(arr[i], arr[smallestIndex]);
           
        }
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 6,10,2, 3};
    sort(arr, arr.size());
    for (int val : arr)
    {
        cout << val << " ";
    }
}