#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl; // prints 4
    cout << s.size() << endl; // prints 4
    s.pop();
    cout << s.top() << endl; // prints 3
    cout << s.size() << endl; // prints 3

return 0;
}