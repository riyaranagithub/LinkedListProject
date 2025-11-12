#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getLength(char name[])
{
    int length = 0;
    while (name[length] != '\0')
    {
        length++;
    }
    return length;
}

void reverse(char name[]){
    int length = getLength(name);
    int i=0;
    int j=length-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout <<"Length of name: "<< getLength(name) << endl;
    reverse(name);
    cout<<"Reversed name: "<<name<<endl;
    return 0;
}