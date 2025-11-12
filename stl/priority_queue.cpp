#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    
    int s = pq.size();
   for(int i=0;i<s;i++){
    cout<<pq.top()<<endl;
    pq.pop();
   }

   

    return 0;
}