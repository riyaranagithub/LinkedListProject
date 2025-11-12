#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        char word = s[i];
        s[i] = s[j];
        s[j] = word;
        i++;
        j--;
    }
    return s;
}

string reverseWord(string s)
{
    vector<string> words;
    s = reverse(s); // reversed whole string
    // cout << "reversed string : " << s << endl;
    int i = 0;
    string word = "";

    while (i < s.length())
    {
        if (s[i] == ' ')
        {
            // cout << "word here: " << word << endl;
            if (word == "")
            {
                i++;
            }
            else
            {
                // cout << "reversed word : " << reverse(word) << endl;
                words.push_back(reverse(word));
                // cout << "result : " << word << endl;
                word = "";
                i++;
            }
        }

        else
        {
            word += s[i];
            i++;
            // cout << "word: " << word << endl;
        }
    }
    if (!word.empty())
    {
        words.push_back(reverse(word));
    }

    string result = "";
    for (int i = 0; i < words.size(); i++)
    {
        result += words[i];
        if (i != words.size() - 1)
        {
            result += " ";
        }
    }

    return result;
}

int main()
{
    string s = "Hello World 88";
    cout << reverseWord(s) << endl;

    return 0;
}