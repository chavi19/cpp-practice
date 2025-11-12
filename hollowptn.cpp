//HOLLOW DIAMOND PATTERN

#include <iostream>
using namespace std;
int main() {
    int n=4;
    //TOP
    for(int i=0; i<n; i++){     //1st outer loop
        for(int j=0; j<n-i-1; j++){  //inner loop-1 for space
            cout<<" ";
        }
        cout<<"*";

        if(i!=0){
            for(int j=0; j<2*i-1; j++){    //inner loop-2 for space
                cout<<" ";
            }
            cout<<"*";

        }
        cout<<endl;
    }
    //BOTTOM
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<" ";
        }
        cout<<"*";

        if(i != n-2) {
            for(int j=0; j<2*(n - i) - 5; j++){  //could be 3-2*i but only for n=4
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//g++ hollowptn.cpp -o hollowptn.exe && hollowptn.exe