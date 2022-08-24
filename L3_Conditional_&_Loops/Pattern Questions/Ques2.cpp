#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter row: ";
    cin>>row;
    int cols;
    cout<<"Enter cols: ";
    cin>>cols;

    for (int  i=1;i<=row;i++){
        for (int j=1;j<=cols;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}