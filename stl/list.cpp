#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst = {1, 2, 3};
    lst.push_front(0);
    lst.push_back(4);
    lst[2]=10;
    // cout<<lst[2]<<endl; //
    for(int val:lst){
        cout << val << " ";
    }
    return 0;
}
