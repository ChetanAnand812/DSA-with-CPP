#include <bits./stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while (start <= end){
         
        if(arr[mid] == key){
            return mid;
        }
        // go to right wala part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
    
}
int main(){
    int arr[100], size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    int Index = binarySearch(arr, size, key);
    cout<<"Index is: "<<Index<<endl;
    
}