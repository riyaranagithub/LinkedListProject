#include <iostream>
#include <vector>
#include <string>

using namespace std;

void letters(string digits, vector<string> &result, string &tempString, int index, string mapping[])
{
    // base case
    if (index >= digits.length())
    {
        result.push_back(tempString);
        return;
    }

    // cout<< digits[index] << endl;

    int digit = digits[index] - '0';

    for (char s : mapping[digit])
    {
        tempString += s;
        letters(digits, result, tempString, index + 1);
        tempString.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{

    vector<string> result = {};
    string tempString = "";
    int index = 0;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    if (digits.length() == 0)
        return result;

    letters(digits, result, tempString, index, mapping);

    return result;
}

int main()
{

    string digits = "2";
    vector<string> ans = letterCombinations(digits);
    for (string s : ans)
    {
        cout << s << endl;
    }
    return 0;
}