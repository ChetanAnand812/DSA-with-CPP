#include<iostream>
using namespace std;

int arraySum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}


int main(){
    int arr[100], size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    for(int i =0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of array is: "<<arraySum(arr, size)<<endl;
}
 