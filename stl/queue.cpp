#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(2);
    q.push(5);
    q.push(1);

    q.pop();
    cout<< q.front()<<endl;

    return 0;
}