#include <iostream>
#include <vector>
#include <string>

using namespace std;

int removeElement(vector<int>& arr, int val) {
    int i=0;
    int j=arr.size()-1;
    while (i <= j) {
        if(arr[i]==val){
            swap(arr[i],arr[j]);
            j--;
        }
        else i++;
        }
        
    return i;
    }
int main(){
    vector<int> arr = {3,2,2,3};
    int val = 3;
    int result = removeElement(arr, val);
    cout << result << endl;

    return 0;
}