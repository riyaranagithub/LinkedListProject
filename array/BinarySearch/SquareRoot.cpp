#include <iostream>
#include <Vector>

using namespace std;

int squareRoot(int num)
{
    int start = 0;
    int end = num;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == num)
        {
            return mid;
        }

        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

double morePrecision(double tempSol, int num, int precision)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor =factor/ 10;

      for(double j =ans ;j*j<num;j=j+factor){
        ans =j;
      }
       
    }
    return ans;
}

int main()
{
    int ans = squareRoot(37);
    cout << squareRoot(37) << endl;
    cout << morePrecision(ans, 37, 3);

    return 0;
}