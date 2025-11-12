#include <iostream>
#include <string>

using namespace std;

int power(int num,int pow){
    cout<<"num = "<<num<<" pow = "<<pow<<endl;

    //base case
    if(pow==0){
        return 1;
    }
    
    if(pow==1)
    {
       return num;
    }
    int ans = power(num,pow/2);
   
    if(pow%2==0){
        return ans*ans;
    }
    else{
        return num*ans*ans;
    }
}

int main(){
    int num = 3;
    int pow = 11;

    cout<<power(num,pow)<<endl;

    return 0;
}