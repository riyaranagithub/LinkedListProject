#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> arr, int mid, int m)//O(n)
{
    int painter = 1;
    int time = 0;

    for (int i = 0; i < arr.size(); i++)  //O(n)
    {
        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }

    if (painter <= m)
    {
        return true;
    }
    return false;
}

int minimumTime(vector<int> arr, int m) ////O(log(sum) * n)
{
    int minimum = arr[0], maximum = 0;
    for (int i = 0; i < arr.size(); i++) //O(n)
    {
        minimum = max(minimum, arr[i]);
        maximum += arr[i];
    }
    int start = minimum;
    int end = maximum;
    int ans;
    while (start <= end) //O(log(sum) * n)
    {

        int mid = start + (end - start) / 2;

        cout<<"mid "<<mid<<endl;

        if (isValid(arr, mid, m)) //O(n)
        {
            cout<<"valid"<<endl;
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector <int> arr = {40,30,10,20};
    cout<<minimumTime(arr,2)<<endl;
    // cout<<minimumTime(arr,5)<<endl;
}