#include <iostream>
#include <vector>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.size() > haystack.size())
    {
        return -1;
    }
    return haystack.find(needle);
}

int main()
{
    cout << strStr("hello", "tll");

    return 0;
}