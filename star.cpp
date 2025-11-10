#include <iostream>
using namespace std;
int main() {
    int n=10;
    for(int i=1; i<=n; i++){        //decides no. of lines to be printed
        int m=5;                    //below prints m no. of stars/num/alpha
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout<<endl;    
    }
    return 0;
}
/* 
for i=1  j= 1 to m -> outer loop(lines) -> inner loop()
for i=2  j= 1 to m 
etc. 
*/