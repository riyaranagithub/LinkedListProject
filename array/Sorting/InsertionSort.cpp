#include <iostream>
#include <vector>

using namespace std;

void printArr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void sort(vector<int> &arr, int n)
{

    for (int i = 0; i < n-1; i++)
    {

       
        int curr = arr[i + 1];
        int prev = i;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=curr;
       
       
      
    
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