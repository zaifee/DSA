#include <iostream>
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
  
    // unordered_map<string, int> um;
     map<string, int> um;
  // insert
    pair<string, int> p = make_pair("Scorpio", 8);
    um.insert(p);
  //insert
    pair<string, int> p2("Alto", 5);
    um.insert(p2);
//insert
    um["fortuner"] = 9;

    // Accessing  -- it will throw an error if it is not present
    cout << um.at("fortuner") << endl;
    cout << um.at("Alto") << endl;
    cout << um["Scorpio"] << endl; // this one we used mostly


    //Accessig  -- if it is present it will return 1 otherwise return 0
     cout << um.count("Scorpio") << endl;


    // it will find the element if it is present in the map
     if(um.find("fortuner") != um.end()){
        cout << "Fortuner Found " << endl;
     }else{
        cout << "Not Found " << endl;
     }


    cout << um.size() << endl;  //three elements are presnt
    
    //Access -- Note
    cout << um["hammer"] << endl;  // it will make a new entry in the map if 
    // we are trying to access the map this way -- so the size of map increases

   cout << um.size() << endl;  // size -- 4

  //  traversing the whole elements
  for(auto i: um){
    cout << i.first << " -- > " << i.second << endl;
  }
  



  return 0;
}
