#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {2, 4, 5, 4};
    d.push_back(1);
    d.push_front(2);
    cout<<"2nd element is "<<d[1]<<endl;
    for (int val : d)
    {
        cout << val << " ";
    }
    d.erase(d.begin(), d.begin() + 2);
    cout << endl;
    for (int val : d)
    {
        cout << val << " ";
    }
    return 0;
}