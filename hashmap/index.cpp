#include <iostream>
#include <map>
#include <unordered_map>


using namespace std;

int main(){
    //creation
    unordered_map<string,int> fruits;

    //insertion
    pair<string, int> p1 = make_pair("apple",3);  //1
    fruits.insert(p1);

    pair<string, int> p2 ("banana",2);  //2
    fruits.insert(p2);

    fruits["orange"]=5;   //3

    //iteration

    cout<< "auto"<<endl;   //1
    // for(auto i:fruits){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    unordered_map<string,int> :: iterator it = fruits.begin();  //2
    // cout<< "iterator"<<endl;
    while(it!=fruits.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }


    //searching

    cout<< "value of apple: "<<fruits["apple"]<<endl;
    cout<< "value of apple: "<<fruits.at("apple")<<endl;

    //key do not exist
    cout<< "value of mango: "<<fruits["mango"]<<endl;
    cout<< "value of mango: "<<fruits.at("mango")<<endl;

   //size()
   cout<< "size of map: "<<fruits.size()<<endl;

   //count()
   cout<< "count of apple: "<<fruits.count("apple")<<endl;
   cout<< "count of mango: "<<fruits.count("mango")<<endl;

   //erase()
   fruits.erase("orange");
   cout<< "size of map: "<<fruits.size()<<endl;
   cout<< "size of map: "<<fruits["orange"]<<endl;



return 0;
}
