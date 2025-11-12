#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// bool isIsomorphic(string s, string t)
// {

//     unordered_map<char, char> mp;
//     for (int i = 0; i < s.length(); i++)
//     {

//         if (!mp.count(s[i]))
//         {
//             for (auto &pair : mp)
//             {
//                 if (pair.second == t[i])
//                 {
//                     return false;
//                 }
//             }
//             mp[s[i]] = t[i];
//         }
//         else
//         {
//             if (!(mp[s[i]] == t[i]))
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

bool isIsomorphic(string s, string t) {

    unordered_map<char,char> sToT;
    unordered_map<char,char> tToS;

    for(int i=0;i<s.length();i++){
        if(sToT.count(s[i] && sToT[s[i]] != t[i])) return false;
        if(tToS.count(t[i] && tToS[t[i]] != s[i])) return false;

        sToT[s[i]]=t[i];
        tToS[t[i]]=s[i];
    }
    return true;
        
}
int main()
{
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s, t) << endl;

    return 0;
}