#include <bits./stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    
    int ans = -1;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){  // right me jao
            start = mid + 1;
        }
        else if(key < arr[mid]){  // left me jao
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;  
}

int lastOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    
    int ans = -1;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){  // right me jao
            start = mid + 1;
        }
        else if(key < arr[mid]){  // left me jao
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
   int num[10] = {1,2,3,4,5,3,4,5,10,3};

    cout<<"First Occurrence of 3 is at index: "<<firstOcc(num, 10, 3)<<endl;

    cout<<"Last Occurrence of 3 is at index:: "<<lastOcc(num, 10, 3)<<endl;
}