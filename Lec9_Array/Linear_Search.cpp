#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    
    for(int i =0; i<size; i++){
        
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100], size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, size, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }

    return 0;
}