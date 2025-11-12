#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkVowel(char c){
   
       if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        return true;
       }
       return false;
    
}

    string reverseVowels(string &s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(checkVowel(s[left] ) && checkVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(checkVowel(s[left])){
                right--;
            }
            else if(checkVowel(s[right])){
                left++;
            }
            else{
                left++;
                right--;
            }
            
       
        }

        return s;
    }

    int main(){
        string s = "Yo! Bottoms Up, u.S. Motto, boy!";
        cout << reverseVowels(s) << endl;

        return 0;
    }