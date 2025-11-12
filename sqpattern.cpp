//square pattern
#include <iostream>
using namespace std;
int main() {
    int n=3;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<j<<" ";
        }
        cout<<endl;  //w/o this output will be in the same line as 123412341234
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    for (int i=0; i<n; i++) {
        for(char ch='A'; ch<='D'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++) {
        char ch='a';    //should be here just before j
        for(int j=0; j<n; j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    int val=1;      //if it was written jst before j, val would be reset to 1 everytime
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
    cout<<endl;

    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}
//g++ sqpattern.cpp -o sqpattern.exe && sqpattern.exe