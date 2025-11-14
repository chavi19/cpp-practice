#include <iostream>
using namespace std;
long long factorial(int n) {
    int fact =1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r){
    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_nmr = factorial(n-r);

    return fact_n/(fact_r * fact_nmr);
}
    
int main() {
    /* int n, r;
    cout<<"enter value of n: ";
    cin>>n;
    cout<<"enter value of r: ";
    cin>>r;

    if(r>n){
        cout<<"Invalid! r cannot be greater than n";
        return 0;
    } 
    long long result = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"nCr: "<<result<<endl;
    return 0; */
    cout<<nCr(6,3)<<endl;
    return 0;
} 