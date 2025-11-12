#include <iostream>
#include <string>
using namespace std;

char lowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

bool checkPalindrome(string s)
{

    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= '0' && s[i] <= '9'))
        {

            temp += lowerCase(s[i]);
        }
    }
    cout << temp << endl;
    int i = 0, j = temp.size() - 1;

    while (i < j)
    {
        if (temp[i] == temp[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << checkPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << checkPalindrome("race a car") << endl;                    
    cout << checkPalindrome(" ") << endl;                              

    return 0;
}
