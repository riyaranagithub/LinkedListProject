#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string str, int i , int n){

    cout<< str[i] <<" "<< str[n-i-1]<<endl;
    cout<< i <<" "<< n-i-1<<endl;
     //base case
     if(i >= n/2){
        cout << "base case hit"<<endl;
        return true;
     }
     else if(str[i] != str[n-i-1]){
        return false;
     }
    return checkPalindrome(str,i+1,n);
}

int main(){
    string str = "racecar";
    cout<<checkPalindrome(str,0,str.length());

    return 0;
}