#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

//                          **--BRUTE FORCE--**

// vector<int> divisors(int n){
//     vector<int> result;

//     for(int  i=1;i<n;i++){
//         if(n%i==0){
//             result.push_back(i);
//         }
//     }

//     return result;
// }




//                          **--OPTIMSED APPROCH--**
vector<int> divisors(int n){
    vector<int> result;

    for(int  i=1;i<=sqrt(n);i++){

        if(n%i==0){
            result.push_back(i);
            if(n/i!=i){
                   result.push_back(n/i);
            }
            
        }
    }

    return result;
}

int main(){

    vector<int> result = divisors(36);

    for(int val:result){
        cout<<val<<" ";
    }
    return 0;
}