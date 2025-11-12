#include <iostream>
#include <vector>
#include <string>

using namespace std;

string replaceSpaces(string &s)
{
   
    for (int i = 0; i < s.length(); i++)
    {
   
        if (s[i] == ' ')
        {
            s[i]= "@40";
        }
    

  
    }
    return s;
}

int main()
{
    string s = "Hello World";
    cout << replaceSpaces(s) << endl;

    return 0;
}