#include <iostream>
#include <string>


using namespace std;

void reverseString(string &str, int start,int n){
    //base case

    if(start== n-start){
        return ;
    }

     swap(str[start],str[n-start]);
    reverseString(str,start+1,n);
    
}

int main(){
    string str = "Coder";
   reverseString(str,0,str.length()-1);
   cout<<str;

return 0;
}