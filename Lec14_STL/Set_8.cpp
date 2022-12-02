#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(2);  // set print only unique element 
    s.insert(9);  // time complexity - O(n)
    s.insert(1);
    s.insert(0);

    for(auto i : s) {
        cout<<i<<endl;
    }
    cout<<"-----------"<<endl;

    set<int>::iterator it = s.begin();
    it++;                    
    s.erase(it);               // delete the 2nd element
    for(auto i : s) {
        cout<<i<<endl;
    }
    cout<<"-----------"<<endl;

    cout<<"3 is present or not-> "<<s.count(3)<<endl;
    cout<<"5 is present or not-> "<<s.count(7)<<endl;

}