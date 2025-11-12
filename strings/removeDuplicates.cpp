#include <iostream>
#include <vector>
#include <string>

using namespace std;

string removeDuplicates(string s){
   string result ="";
   for(char c:s){
    if(result =="" || result.back() != c){
        result.push_back(c);
    }
    else{
        result.pop_back();
    }

   }
   return result;
}

int main(){
    string s = "aaaaaaaa";
    cout << removeDuplicates(s) << endl;

    return 0;
}