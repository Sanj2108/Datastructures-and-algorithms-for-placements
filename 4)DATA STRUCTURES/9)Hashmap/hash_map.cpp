#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
     //key value pair
     //map->ordered map->BST->O(logn)->keys are sorted
     //unordered map->Hash table->O(1)
     //creation
     unordered_map<string,int> m;
     
     //insertion
     pair<string,int> p1=make_pair("babbar",3);
     m.insert(p1);

     //OR
     pair<string,int> p2("love",2);
     
     //0R
     m["mera"]=1;

     //remember map only stores unique key 
     //it will update once you put new value
     //no duplicate entries

      //Search/access
      cout<<m["mera"]<<endl;
      cout<<m.at("babbar")<<endl;
      
      //cout<<m.at("unknown")<<endl;//error
      cout<<m["unknown"]<<endl;//this creates<"unknown",0>

      cout<<m.size()<<endl;

      //check if somethind is there or not
      if(m.count("bhai")>0){
          cout<<"present"<<endl; 
      } 

      //erase
      m.erase("babbar");
      cout<<m.size()<<endl; 
      
      //map traversal
      for(auto i:m){
          cout<<i.first<<":"<<i.second<<endl;
      }
       //iterator
       unordered_map<string,int> :: iterator it=m.begin();
       while(it!=m.end()){
           cout<<it->first<<":"<<it->second<<endl;
           it++;
       }
       //unordered me sequence preserve nhi hoti
       //ordered me jis sequence me dallte usme hi rehta
       

       


}
