//Question 2 -- sum of 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;
    int sum = 0;
    while (i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout<<"Value of sum is:"<<sum;

}