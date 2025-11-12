#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkEqual(vector<int> &arr1, vector<int> &arr2)
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
        return false;

    vector<int> countS1(26, 0);
    vector<int> countWindow(26, 0);

    for (char c : s1)
        countS1[c - 'a']++;

    // Initial window
    for (int i = 0; i < s1.length(); i++)
        countWindow[s2[i] - 'a']++;

    if (checkEqual(countS1, countWindow))
        return true;

    // Sliding window
    for (int i = s1.length(); i < s2.length(); i++)
    {
        countWindow[s2[i] - 'a']++;                       // Add new char
        countWindow[s2[i - s1.length()] - 'a']--;         // Remove old char

        if (checkEqual(countS1, countWindow))
            return true;
    }

    return false;
}

int main()
{
    string s1 = "abc";
    string s2 = "eidbcaoaoo";
    cout << checkInclusion(s1, s2) << endl; // Output: 1 (true)

    return 0;
}
