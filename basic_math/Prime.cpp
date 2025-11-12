#include <iostream>
#include <math.h>
using namespace std;


bool prime(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;

            if(n/i!=i){
            count++;
        }
        }
        
        
        
    }
    // cout<<count;

    if(count>2){
        return false;
    }
    return true;
}

int main(){

    cout<<prime(13);
    cout<<endl;
    // cout<<prime(14);
    return 0;
}