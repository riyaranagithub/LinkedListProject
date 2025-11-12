#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    // int arr[3][4];
    
    // cout << "Enter the number of rows: ";
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin >> arr[j][i];
    //     }
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int arr2[3][3] = {1,3,2,6,4,8,7,5,8};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr1[i][j] << " ";
            }
            cout<<endl;
        }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr2[i][j] << " ";
            }
            cout<<endl;
        }

    
    return 0;
}