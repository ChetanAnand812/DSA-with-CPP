#include <bits./stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (mid - start)/2;
    
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
        int mid = start + (mid - start)/2;
    }
    return ans;  
}

int lastOcc(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (mid - start)/2;
    
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
        int mid = start + (mid - start)/2;
    }
    return ans;
}

int main(){
   int arr[100], n;
   cout<<"Enter size of array: "<<endl;
   cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    int first = firstOcc(arr, n, key);
    cout<<"First Occurrence of 3 is at index: "<<first<<endl;

    int last = lastOcc(arr, n, key);
    cout<<"Last Occurrence of 3 is at index:: "<<last<<endl;
}