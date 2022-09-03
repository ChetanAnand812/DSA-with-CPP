#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<<"Swap Alternate of Array is"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size ; i=i+2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int arr[100], size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    swapAlternate(arr, size);
    printArray(arr, size);
}