#include <iostream>
#include <vector>

using namespace std;

// int maxAmount(vector<int> arr){
//     int ans=0;
//     for(int  i=1;i<arr.size();i++){
//         for(int j=0;j<=i;j++){
//           ans=max(ans,min(arr[i],arr[j])*(i-j));
//         }
//     }

//     return ans;
// }

int maxAmount(vector<int> arr)
{
    int i = 0, j = arr.size() - 1;
    int ans = 0;

    while (i < j)
    {
        cout << "i= " << i << " j= " << j << endl;
        ans = max(ans, min(arr[i], arr[j]) * (j - i));

        arr[j] > arr[i] ? i++ : j--;
        cout << "ans " << ans << endl;
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5};
    cout << maxAmount(arr);
}
