#include <iostream>
using namespace std;

void update(int n){
    n++;
    cout<<"n = "<<n<<endl;
}

int &update(int n){
    int ans = &n;
    ans++;
    return ans;
}

int main()
{
   
  int n = 23;
  cout<< n<<endl;
  update(n);
  cout<<n<<endl;

return 0 ;
}