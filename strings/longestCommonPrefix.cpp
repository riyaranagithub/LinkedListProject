#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

    int i = 0;
    char pre = strs[0][i];
    string ans = "";
    while (i < strs[0].size())
    {
        for (int j = 0; j < strs.size(); j++)
        {
            if (strs[j].size() < i || pre != strs[j][i])
            {
                return ans;
            }
        }
        ans += pre;

        i++;
        pre = strs[0][i];
    }

    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "floght"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}