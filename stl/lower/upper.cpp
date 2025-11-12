#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> v = {1, 3,6,7};
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
}