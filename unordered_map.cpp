#include <bits/stdc++.h>
#define line_break cout<<endl
using namespace std;

int main ()
{
  unordered_map < string, int >v;
  v["ratnesh"] = 10;
  v["html"] = 5;
  v["css"] = 13;
  v["c++"] = 9;
  v["python"] = 22;
  v["pythonm"] = 22;
  v.insert(make_pair("google",100));
  v.erase("html");
for (auto x:v)
    {
      cout << x.first << " " << x.second << endl;
    }
    line_break;
for (auto it=v.begin();it!=v.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
    line_break;
    //find() provide iterator of the key ,    iterator->first or second to access
    string key="c++";
    if(v.find(key)!=v.end()){
        auto temp=v.find(key);
        
        cout<<"key is "<<temp->first<<" and value is "<<temp->second<<endl;
    }
    else{
        cout<<"key not found"<<endl;
        }    
        
    cout<<"size of map"<<v.size();
    int arr[]={2, 4, 6, 3, 13, 33 ,2, 3 ,4, 15 ,16, 19,3};
    for (int i=0;i<13;i++){
        int keyy=arr[i];
        v["keyy"]++;
    }
    for (auto it=v.begin();it!=v.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
  return 0;
}
