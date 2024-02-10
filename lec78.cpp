#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
 unordered_map<int,int> m;

//  pair<string,int> p = make_pair("Nitesh",3);
//  m.insert(p);

//  pair<string,int> p2("Love",5);
//  m.insert(p2);

//  m["babbar"]=1;

//  cout<<m["babbar"]<<endl;
//  cout<<m.at("Nitesh")<<endl;

//  cout<<m["Sanjay"]<<endl;
//  cout<<m.at("Sanjay")<<endl;

//  cout<<"The size of the map: "<<m.size()<<endl;
//  cout<<m.count("Nitesh")<<endl;

//  // m.erase("Love");
//  // cout << "The size of the map: " << m.size() << endl;

//  for(auto i : m){
//   cout<<i.first<<" "<<i.second<<endl;
//  }
// cout<<endl<<"hey!!!!!!"<<endl<<endl;
//  unordered_map<string,int> :: iterator it = m.begin();
//  while(it!=m.end()){
//   cout<<it->first<<" "<<it->second<<endl;
//   it++;
//  }

 int arr[12]={1,1,1,1,2,2,4,5,6,77,27,13};
 for(int i=0;i<12;i++){
  m[arr[i]]++;
 }
 for(auto i:m){
  cout << i.first <<" "<<i.second<<endl;
 }

 return 0;
}