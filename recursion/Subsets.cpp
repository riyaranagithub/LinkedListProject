#include <iostream>
#include <vector>

using namespace std;

// void subset(vector<int> &arr, vector<int> &ans, int i)
// {
//     cout << "i= " << i << endl;
//     if (i == arr.size())
//     {
//         for (int val : ans)
//         {
//             cout << val;
//         }
//         cout << endl;
//         return;
//     }

//     ans.push_back(arr[i]);

//     subset(arr, ans, i + 1);

//     cout << "j= " << i << endl;

//     ans.pop_back();

//     subset(arr, ans, i + 1);
// }

void subset(vector<int> &arr, vector<int> &ans, int i)
{
    // base case
    if (i == arr.size())
    {
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    // exculde

    subset(arr, ans, i + 1);

    // include
    ans.push_back(arr[i]);
    subset(arr, ans, i + 1);
    ans.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<int> ans = {};

    subset(arr, ans, 0);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}