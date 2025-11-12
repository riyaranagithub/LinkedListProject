#include <iostream> 
#include <vector>
#include <string>

using namespace std;

string getPermutation(string &str,int index, vector<string> &result) {
    //base case
    if(index >= str.length()-1){
        result.push_back(str);
        return str;;
    }

    //permutation
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        getPermutation(str,index+1,result);
        swap(str[index],str[i]);

    }
    



  
        
}


int main() {
    string str = "abc";
    vector<string> result;
    int index = 0;
    getPermutation(str,index,result);
    for(string s : result){
        cout<<s<<endl;
    }
    return 0;
}

