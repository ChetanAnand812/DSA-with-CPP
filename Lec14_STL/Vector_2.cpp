#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> a(5,1);   // 5 is size of vector and 1 is element
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    // vector<int> last(a); --> for copy eleement 
    
    vector<int> v;
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;   // Heare array size is 3 but you can store 4 element
    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd Index->"<<v.at(2)<<endl;

    // Front and back
    cout<<"Front-> "<<v.front()<<endl;    
    cout<<"Back-> "<<v.back()<<endl;

    // Pop
    cout<<"before pop"<<endl;
    for(int i:v){                  
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    // Clear
    cout<<"Before clear size "<<v.size()<<endl;    
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

}