#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

        unordered_map<char,int> freq;

        for(auto c: s){
            freq[c]++;
        }

        for(auto c:t){
            if(freq[c]==0) return false;
            freq[c]--;
          
        }

        return true;
}

int main() {
    string s = "anagrmam";
    string t = "nagaram";
    cout << isAnagram(s, t) << endl; // should print 1 (true)
    return 0;
}
