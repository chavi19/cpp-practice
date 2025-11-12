//PYRAMID PATTERN(break into smaller triangles more loops)

#include <iostream>
using namespace std;
int main() {
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++) { //spaces comapre to n & i
            cout<<" ";
        }
        for(int j=1; j<=i+1; j++){   //how many numbers to be printed
            cout<<j;              //which numbers      
        }
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
//g++ pyramidptn.cpp -o pyramidptn.exe && pyramidptn.exe