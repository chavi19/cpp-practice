// INVERTED TRIANGLE PATTERNS (space-loop + char-loop)

#include <iostream>
using namespace std;
int main() {
    int n=4;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++){  //no. of spaces
            cout<<" ";
        }
        for (int j=0; j<n-i; j++) {  //no. of numericals
            cout<<(i+1);               //which numbers to be printed
        }
        cout<<endl;
    }

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        for(int j=0; j<n-i; j++) {
            cout<<ch;    
        }
        cout<<endl;
        ch++;
    }
}
//g++ invtriptn.cpp -o invtriptn.exe && invtriptn.exe