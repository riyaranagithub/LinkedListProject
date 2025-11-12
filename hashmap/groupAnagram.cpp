#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> sortMap;

    // for(auto str:strs){
    //     string key = str;
    //     sort(key.begin(),key.end());
    //     sortMap[key].push_back(str);
    // }

    for(auto str:strs){

        vector<int> freq(26,0);
        string key="";
        for(char c :str){
            freq[c-'a']++;
        }
        for(int count:freq){
            key += to_string(count)+ "#";
        }
        cout<< "key:"<<key<<endl;

        sortMap[key].push_back(str);
    
    }

  

    vector<vector<string>> result;
    for(auto &i:sortMap){
        result.push_back(i.second);
    }
    return result;
}

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    for(auto group: result){
        for(auto word: group){
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}