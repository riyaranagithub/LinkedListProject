#include <iostream>
#include <vector>
#include <string>

using namespace std;

void substring(string &str, int i, string &substr, vector<string> &result)
{
    if (i >= str.length())
    {
        result.push_back(substr);
        return;
    }

    substring(str, i + 1, substr, result);

    substr.push_back(str[i]);

    substring(str, i + 1, substr, result);
    substr.pop_back();
}

vector<string> subsequences(string str)
{
    vector<string> result;

    string substr = "";
    substring(str, 0, substr, result);
    result.push_back(substr);

    return result;
}

int main()
{
    string str = "abc";
    vector<string> ans = subsequences(str);
    for (string s : ans)
    {
        cout << s << endl;
    }
    return 0;
}