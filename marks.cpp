 #include <iostream>
 using namespace std;
 int main() {
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks >= 80) {
        cout<<"A";
    }
    else if(marks>=70 && marks<80 ) {  //both True
        cout<<"B";
    }
    else{
        cout<<"C";
    }
    return 0;
 }