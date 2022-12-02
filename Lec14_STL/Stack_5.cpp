#include<iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;    // Last in last out

    s.push("Chetan");
    s.push("Anand");

    cout<<"Top element-> "<<s.top()<<endl;

    s.pop();
    cout<<"Top element-> "<<s.top()<<endl;

    cout<<"Size of stack-> "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

}
