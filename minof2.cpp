/* #include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    if (a>b)        //condition under ()
    cout<<"min num is b: "<<b;
    else
    cout<<"min num is a: "<<a;
    return 0;
}

g++ minof2.cpp -o minof2.exe && minof2.exe

 */


 #include <iostream>
 using namespace std;
 int main() {
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    if (a>b)
        cout<<"max num is a: "<<a;
    else 
        cout<<"max num is b: "<<b;
    return 0;
 }