#include <iostream>

using namespace std;

void reachHome(int src, int des){
    //base case
    if(src==des){
        cout<<"Reached Home"<<endl;
        return ;
    }

    //recursive function
    src++;
    return reachHome(src,des);


}

int main(){
    reachHome(0,10);

    return 0;
}