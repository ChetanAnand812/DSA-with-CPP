#include <iostream>
using namespace std;

void update(int arr[], int n){

    cout<<"Inside the function"<<endl;

    // updating array's first element
    arr[0] = 120;

    // printing the array
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main function"<<endl;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    update(arr, 5);

    // printing the array
    cout<<"Printing in main function"<<endl;

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}