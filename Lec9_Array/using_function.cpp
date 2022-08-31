#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done"<<endl;
}


int main(){
    int one[15] = {2,7};
    int n = 15;
    printArray(one, 15);

    int oneSize = sizeof(one)/sizeof(int);
    cout<<"Size of One is "<< oneSize<<endl;
    
}