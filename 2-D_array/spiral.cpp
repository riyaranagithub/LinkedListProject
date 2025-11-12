#include <iostream>
#include <vector>

using namespace std;

vector<int> spiral(vector<vector<int>> arr)
{
    vector<int> result;
    int nrow = arr.size();
    int ncol = arr[0].size();

    int srow = 0;
    int scol = 0;
    int erow = nrow - 1;
    int ecol = ncol - 1;

    int total = nrow * ncol;
    
    cout<< "tota; "<< total << endl;


    while (total > 0)
    {
        // starting row
        for (int i = scol; i <= ecol; i++)
        {
            
            result.push_back(arr[srow][i]);
            total--;
        }

        srow++;
        // ending column
        for (int i = srow; i <= erow; i++)
        {
          
            result.push_back(arr[i][ecol]);
            total--;
        }

        // ending row
        ecol--;
        for (int i = ecol; i >= scol; i--)
        {
           
            result.push_back(arr[erow][i]);
            total--;
        }

        erow--;

        // starting column
        for (int i = erow; i >= srow; i--)
        {
           
            result.push_back(arr[i][scol]);
            total--;
        }

        scol++;
    }
    return result;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3,4}, { 5, 6,7,8}, {9,10,11,12}};
    vector<int> result = spiral(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}