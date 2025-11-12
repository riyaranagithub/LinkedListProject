#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s = {1, 2, 4, 4, 3, 2};
    s.insert(1); // duplicate
    s.insert(2); // duplicate
    s.insert(8); // new element

    for (auto val : s) cout << val << " ";  // Output: 1 2 3 4 8
    cout << endl;

    set<int>::iterator itr = s.find(3);
     cout << *itr << endl; 
    if (itr != s.end()) {
        cout << *itr << endl;  // Output: 3
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
