#include <iostream>
using namespace std;
int main() {
    int n;
    long long factorial=1;  //improvement
    cout<<"Enter value of n: ";
    cin>>n;
    
    if(n<0) {           //improvement
        cout<<"Factorial is not defined for negative numbers";
        return 0;
    }
    for(int count=1; count<=n; count++) {
        factorial *= count;
    }
    cout<<"Factorial of "<<n<<" is: "<<factorial;
    return 0;
}