#include <iostream>
using namespace std;
/* int main() {
    //cout<<"Hello World!";
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<(n >= 0 ? "positive" : "negative")<<endl;     //ternary operator
    //condition ? stmt1 : stmt2;
    return 0;
} */
int main() {
    int n;
    cout<<"enter value: ";
    cin>>n;
    for(int count=1; count<=n ; count++) {
        cout<<" "<<count;
    }
    return 0;
}