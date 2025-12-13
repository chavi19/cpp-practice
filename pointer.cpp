#include <iostream>
using namespace std;
void changeA(int* ptr4){
    *ptr4 = 20; //Pass by Ref: using pointers
}
int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;  //pointer to pointer
    int* ptr3 = NULL;
    int arr[] = {1,2,3,4};  //array pointer - constant ptr, can't be changed further
    //pointer arithmetic
    int* ptr6;  //100
    int* ptr5 = ptr6 + 2;   //108
    cout<< ptr5 - ptr6 <<endl;  //2

    changeA(&a);
    cout<<"inside main fx: "<<a<<endl;  //20
    cout<<ptr<<endl;
    cout<<&a<<endl; //same
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<*(&a)<<endl;  //Dereference Operator: *
    cout<<*(ptr)<<endl;
    cout<<ptr3<<endl;
    cout<<arr<<endl;
    cout<<*arr<<endl;   //value at 0th index
    return 0;
}