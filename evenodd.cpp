#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    /* if (n % 2 == 0)        //condition under ()
    cout<<"num is even: "<<n;
    else
    cout<<"num is odd: "<<n;
    return 0; */

    if (n & 1)
    cout<<"Odd";
    else
    cout<<"Even";
} 

/* In binary form, odd numbers always have the last bit = 1, even numbers have last bit = 0.

5 → 0101 → odd
8 → 1000 → even

Fastest method */
/* Alt+shift+A */