#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "chetan";   // 1, 2, 13 is key value
    m[13] = "anand";
    m[2] ="rishu";

    m.insert({5, "Hello"});

    cout<<"Before erase"<<endl;

    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"Finding -13 -> " <<m.count(-13)<<endl;

    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<endl;             //output-5
    }                                       


}