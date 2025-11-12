#include <iostream>
#include <string>
using namespace std;

string sayDigit(int n) {
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    // Base case
    if (n == 0) {
        return "";
    }
    
    int lastdigit = n % 10;  // take last digit
    n = n / 10;              // reduce number
    
    // Recursive call (first process remaining digits, then current digit)
    string ans = sayDigit(n) + arr[lastdigit] + " ";
    
    return ans;
}

int main() {
    int num = 143;
    cout << sayDigit(num) << endl;  // Output: one four three 
    return 0;
}
