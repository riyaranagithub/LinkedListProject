#include <iostream>
using namespace std;

#define PI 3.14
#define min(a, b) (((a) < (b)) ? (a) : (b))

int marks = 20;

void a()
{
    cout << "marks in a: " << marks;
}

inline maximum(int a,int b){
    return (a>b)?a:b;
}

int main()
{
    int r = 5;
    //   int  PI = 2;
    double area = PI * r * r;
    //   cout<<min(22,223);

    // cout << "marks in main: " << marks;
    marks = 21;
    // a();

    cout<<maximum(3,2);

    return 0;
}
