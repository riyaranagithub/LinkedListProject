#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool isValid(vector<int> arr, int allowedDistance, int m)
{
    int cows = 1;
    int distance = 0;
    int position = arr[0];
    sort(arr.begin(), arr.end());
    
    cout<<"checking for - "<<allowedDistance<<endl;
    for (int i = 1; i < arr.size(); i++)
    {
         cout<<"position = "<<position<<endl;
        if (arr[i] - position >= allowedDistance)
        {

            position = arr[i];
            cows++;
           
        }
    }
    cout<<"cows = "<<cows<<endl;
    cout<<"-------------"<<endl;

    if (cows != m)
    {
        return false;
    }
    return true;
}

int minimumDistance(vector<int> arr, int m)
{

    int start = 1;
    int maxPosition = INT_MIN, minPosition = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        maxPosition = max(maxPosition, arr[i]);
        minPosition = min(minPosition, arr[i]);
    }
    int end = maxPosition - minPosition;
    int ans;

    cout<<"range - "<<start<<" , "<<end<<endl;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
         cout<<"mid = "<<mid<<endl;
        if (isValid(arr, mid, m))
        {
            cout<<"index - "<<mid<<"is valid"<<endl;
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    cout << minimumDistance(arr, 3);
}