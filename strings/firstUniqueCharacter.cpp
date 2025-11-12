#include <iostream>
#include <vector>
#include <string>

using namespace std;

int firstUniqChar(string s)
{
    vector<int> count(26, 0);
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        index = s[i] - 'a';
        count[index]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i] - 'a'] == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "loveleetcode";
    cout << firstUniqChar(s) << endl;

    return 0;
}