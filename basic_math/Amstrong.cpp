#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

 bool isArmstrong(int n) {
        int temp1=n;
        int temp2=n;
        int count=0;
        int ans=0;
        while(temp1!=0){
            int lastdigit=temp1%10;
            count++;
            temp1=temp1/10;
        }

        while(temp2!=0){
          int lastdigit=temp2%10;
          ans=ans+pow(lastdigit,count);
          temp2=temp2/10;
        }

        if(ans==n){
            return true;
        }

        return false;
    }

int main(){
    cout<<isArmstrong(153);

    return 0;
}