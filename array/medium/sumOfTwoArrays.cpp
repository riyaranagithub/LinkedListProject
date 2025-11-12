#include <iostream>
#include <vector>
#include <deque>

using namespace std;

deque<int> sum(vector<int> arr1,vector<int> arr2){
    deque<int> result;

    int i=arr1.size()-1;
    int j=arr2.size()-1;

    int carry=0;
    while(i>=0 && j>=0){
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        int add = sum%10;

        result.push_front(add);
        i--;
        j--;
    }

    while(i>=0){
        int sum = arr1[i]+carry;
         carry = sum/10;
         int add = sum%10;
        result.push_front(add);
        i--;
    }

    while(j>=0)
    {
         int sum = arr2[j]+carry;
         carry = sum/10;
         int add = sum%10;
        result.push_front(add);
       j--;
    }
    if (carry != 0) {
    result.push_front(carry);
}


    return result;
    
}

int main(){
    vector <int> v1 = {1, 2, 3, 4};
    vector <int> v2 = {6};

    deque<int> result = sum(v1,v2);
    cout << "Sum of two vectors is: ";
    for (auto it = result.begin(); it != result.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}