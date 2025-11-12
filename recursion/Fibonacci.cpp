#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n)
{

    // if (n == 1)
    // {
    //     return 1;
    // }
    // if (n == 0)
    // {
    //     return 0;
    // }

    // return fibonacci(n - 1) + fibonacci(n - 2);

    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    int first=0;
    int second =1;
    int ans;

    for(int i=3 ;i<=n;i++){
       ans = first + second;
       first = second;
       second = ans;

    }

    return ans;
   
}

int main()
{

    // cout << fibonacci(0) << " ";
    cout << fibonacci(1) << " ";
    cout << fibonacci(2) << " ";
    cout << fibonacci(3) << " ";
    cout << fibonacci(4) << " ";
    cout << fibonacci(5) << " ";
    cout << fibonacci(6) << " ";
    cout << fibonacci(7) << " ";

    return 0;
}