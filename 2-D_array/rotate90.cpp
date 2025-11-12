#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void printVector(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool removeVector(vector<vector<int>>& matrix, const vector<int>& target) {
    for (auto it = matrix.begin(); it != matrix.end(); ++it) {
        if (*it == target) {
            matrix.erase(it);  // Remove the matching vector
            return true;       // Found and removed
        }
    }
    return false; // Not found
}


void rotate(vector<vector<int>> &arr)
{
    int nRow = arr.size();
    int nCol = arr[0].size();

    vector<vector<int>> temp;

    for (int i = 0; i < nRow; i++)
    {
        //  cout<<"row: "<<i<<endl;
        for (int j = 0; j < nCol; j++)
        {
            
            if (i != j)
            {

                if (!removeVector(temp,{i,j}))

                {
                    temp.push_back({j, i});
                    swap(arr[i][j], arr[j][i]);
                }
                
            }
        }
        // printVector(arr);
    }
    
 

    int i = 0;
    int j = nCol - 1;

    while (i < j)
    {

            for(int k = 0; k < nCol; k++){
                swap (arr[k][i], arr[k][j]);
            }
            // swap(arr[sRow, i], arr[sRow,j]);
             printVector(arr);
        cout << "---------" << endl;
        
       
        i++;
        j--;
    }
}
int main()
{
    vector<vector<int>> arr =  {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };
    rotate(arr);
    printVector(arr);

    return 0;
}