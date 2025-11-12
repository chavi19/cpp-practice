//triangle patterns */num/alp
//Outer loop → controls rows
//Inner loop(i+1) → controls how many characters to print per row
//Each row prints the same letter repeatedly  cout<<
//Letter changes each row (A → B → C → D)

#include <iostream>
using namespace std;
int main() {
    int n=4;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++){   //can be j=1 to j<=i+1  //using i not n coz logic depends on i=0 so 1*, i=1 so 2*, etc
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++){   
            cout<<(i+1);        //dry run 
        }
        cout<<endl;
    }
    
    char ch='A';
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++){   
            cout<<ch;         
        }
        cout<<endl;
        ch++;       //understand this
    }

    //if val was here the o/p would be a triangle in seq. 1,23,456,etc
    for(int i=0; i<n; i++) {
        int val=1;      //this means line will always start from 1
        for(int j=0; j<i+1; j++){   
            cout<<val;         
            val++;
        }
        cout<<endl;
    } 
//it can also be like
    for(int i=0; i<n; i++) {
        for(int j=1; j<=i+1; j++){   
            cout<<j;             
        }
        cout<<endl;
    }

    //reverse triangle
    for(int i=0; i<n; i++) {
        for(int j=i+1; j>0; j--){   //j jab tk 0 se kam h tab tk print j--
            cout<<j;             
        }
        cout<<endl;
    }

    //Floyd's Triangle Pattern
    int val=1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++){   
            cout<<val;        //dry run 
            val++;
        }
        cout<<endl;
    }

    //Floyd's Alphabet Triangle Pattern
    char c='A';
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++){   
            cout<<c;        //dry run 
            c++;
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;       // starting letter for this row
        for (int j = 0; j <i+1; j++) {
            cout << ch;          // print current character
            ch--;                // move one character backward (e.g., D → C → B → A)
        }
        cout << endl;
    }
           
}
//g++ tripattern.cpp -o tripattern.exe && tripattern.exe