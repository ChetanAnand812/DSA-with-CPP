#include <iostream>
using namespace std;

long long int sqrInteger(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        
        while(s<=e){
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
}

double morePrecision(int n, int precision, int tempSoln){
    double factor = 1;
    double ans = tempSoln;

    for(int i=0; i<precision; i++){
        factor = factor/10; // 1st-0.1, 2nd-0.01, 3rd-0.001

        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int tempSol = sqrInteger(n);
    cout<<"Answer is "<<morePrecision(n, 3, tempSol)<<endl;

    return 0;
}
