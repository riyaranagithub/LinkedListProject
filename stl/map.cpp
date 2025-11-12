#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="riya";
    m[2]="krish";
    m[3]="simran";
   
    cout<<m[2]<<endl;
    // m.erase(2);
    // cout<<m[2]<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(2);
    
    for(auto i=it;i!=m.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }

    return 0;

}