//to check if the char is uppercase or lower case
//can use ASCII values too a=97 to z=122 & A=65 to Z=90
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(ch>='a' && ch<='z') {       //if(ch>=97 && ch<=122)
        cout<<"lowercase: "<<ch<<endl;
    }
    else{
        cout<<"Uppercase: "<<ch<<endl;
    }
    return 0;
}
