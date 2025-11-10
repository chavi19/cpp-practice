#include <iostream>
using namespace std;
int main() {
    float SI, P, R, T;
    cout<<"Enter the value of P: ";
    cin>>P;
    cout<<"Enter the value of R: ";
    cin>>R;
    cout<<"Enter the value of T: ";
    cin>>T;
    SI = (P * R * T) / 100 ;
    cout<<"Value of SI is "<<SI;
    return 0;
}