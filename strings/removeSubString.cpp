#include <iostream>
#include <vector>
#include <string>

using namespace std;

string removeSub(string s,string part){
   
  while(s.length() !=0 && s.find(part) != string::npos){
    s.erase(s.find(part),part.length());
  }
  return s;
}

int main(){
    
    cout<< removeSub("Hello, world!", "world")<<endl;


     

    return 0;
}