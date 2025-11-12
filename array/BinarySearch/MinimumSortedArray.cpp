#include <iostream>
#include <vector>

using namespace std;

int minimum(vector<int> arr)
{

    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        // cout << "start = " << start << " end = " << end << endl;
        // cout << "mid = " << mid << endl;



        if (arr[end] < arr[mid]) //rigth is unsorted
        {
            // cout << "moved to right" << endl;
            start = mid + 1;
        }
        else  //left is unsorted
        {
            // cout << "moved to left" << endl;
            end = mid ;
        }
        // cout << "----" << endl;
    }

    return arr[end];
}

int pivot(vector<int> arr){

    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<end){
        cout<<"start = "<<start<<" end = "<<end<<" mid = "<<mid<<endl;
        if(arr[end]<arr[mid]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start+(end-start)/2;
    }

    return arr[start];
}



int main()
{
    vector<int> arr1 = {3, 4, 5, 1, 2};
    vector<int> arr2 = {4, 5, 6, 7, 0, 1, 2, 3};
    vector<int> arr3 = {1,2,3,4,5};
    // cout<<minimum(arr1)<<endl;
    // cout << minimum(arr2) << endl;
    cout << pivot(arr2) << endl;
    // cout << minimum(arr3) << endl;
}