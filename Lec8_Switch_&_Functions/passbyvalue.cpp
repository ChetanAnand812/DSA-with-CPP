#include<iostream>
using namespace std;

/*  1
void dummy(int n){
    n++;
    cout<<"N is "<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<"Number n is "<<n<<endl;

    return 0;
}


/*   2
void update(int a){
    a = a/2;
}
int main(){                       // output - 10
    int a = 10;
    update(a);
    cout<<a<<endl;
}
*/

/*   3
int update(int a){
    a = a-5;
    return a;
}
int main(){                       // output - 15
    int a = 15;
    update(a);
    cout<<a<<endl;
}
*/


int update(int a){
    int ans = a*a;
    return ans;
}
int main(){                       // output - 196
    int a = 14;
    // a = update(a);
    cout<<update(a)<<endl;
}
