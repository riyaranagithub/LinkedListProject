#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end){
    int pivot = arr[start];
    int count = 0;
    for(int i = start+1; i <= end; i++){
        if(arr[i] <= pivot){
           
            count++;
        }
    }
    

    //place pivot at right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    //left and right part
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
   

    return pivotIndex;

}

void quickSort(vector<int> &arr,int start,int end){
    //base case
    if(start >= end){
        return ;
    }
     
 
    int pivotIndex = partition(arr,start,end);

    quickSort(arr,start,pivotIndex-1 ); //left part
    quickSort(arr, pivotIndex+1, end); //right part
}

int main()
{
    vector<int> arr = {3,5,1,8,2,4};
    // vector<int> arr = {5, 4, 3, 2, 10,};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}