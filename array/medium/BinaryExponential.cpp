#include <iostream>
#include <vector>

using namespace std;

//50.Pow(x,n)

double binaryExponential(double x, int n)
{
    double ans = 1;
    if(n<0){
        x=1/x;
        n=-n;
    }
    while (n > 0)
    {
        int lastdigit = n & 1;
        if (lastdigit == 1)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }

    return ans;
}
int main()
{
    cout << binaryExponential(3, 2) << endl; // 9
    cout << binaryExponential(5, 3) << endl; // 125
    cout << binaryExponential(4, 2) << endl; // 16
    cout << binaryExponential(5, -2) << endl; // 16
}