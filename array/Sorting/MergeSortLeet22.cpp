#include <iostream>
#include <vector>

using namespace std;

vector <int> sort(vector<int> arr1,int m, vector<int> arr2,int n){
    int i=0;
    int j=0;
    while(j<n){
        if(arr2[j]>=arr1[i]){
            arr1[i+2]=arr1[i+1];
            arr1[i+1]=arr2[j];
            i=i+2;
            j++;
        }
        else{
            i++;
            
        }
    }

    return arr1;
}

int main(){
    vector<int> arr1= {1,2,3,0,0,0};
    vector<int> arr2= {2,5,6};

    vector<int> result = sort(arr1,6,arr2,3);

    for(int val:result){
        cout<<val<<" ";
    }

    return 0;

}