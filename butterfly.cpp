//BUTTERFLY PATTERN
//break the pattern in top & bottom parts
//TOP part(star+space+star) same with bottom

#include <iostream>
using namespace std;
int main() {
    int n=4;
    //TOP
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {      //logic is always: kitna char h?
            cout<<"*";                  //ky char h?
        }
        for(int j=0; j<2*(n-i)-2; j++) {    //kitna space h? //observe when val of i increases, spaces decreases i.e. (-i), now coz spaces r even 2*(-i), use n mandatory 2*(n-i), hit n trial
            cout<<" ";
        }
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    //BOTTOM
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*i; j++) {
            cout<<" ";
        }
        for(int j=0; j<n-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
    //g++ butterfly.cpp -o butterfly.exe && butterfly.exe
