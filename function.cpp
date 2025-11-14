//we break our logic into parts, not put all in main func 

#include <iostream>
using namespace std;
/* 
void printHello() {     //just like int main() {}  //void coz doesn't return anything 
    cout<<"Hello";
}

int main() {           //function won't return anything until "we call it"

    return 0;
} */

int printHello() {
    cout<<"hello";
    return 3;
}

//sum of 2 nums
int sum(int a, int b) {     //parameters
    int s = a + b;
    return s;
}

//min of 2 nums
int min(int a, int b) {
    if (a<b) {
        return a;
    }
    else {
        return b;
    }
}

//sum of num from 1 to N
int sumofN(int n) {
    int sum=0;
    for(int count=1; count<=n; count++) {
        sum += count;
    }
    return sum;
}

//n factorial
int factorialN(int n){
    int fac = 1;
    for(int i=1; i<=n; i++) {
        fac *= i;
    }
    return fac;
}

//sum of digits of a number
int digitSum(int n) {
    int sum=0;
    while(n>0) {
        int lastdigit = n % 10;     // get last digit
        sum += lastdigit;           // add to sum
        n = n/10;               // remove last digit
    }
    return sum;
    //for(initialisation; condition; updatation)
 /*    for ( ; n > 0; n = n / 10) {
        int digit = n % 10;
        sum += digit;
    } */
}

//prime or not
bool isPrime(int n){
    if(n==2){
        return true;
    }
    if(n==1 || n%2==0){
        return false;
    }
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

//print primes from 2 to N
void printPrime(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

//find nth fibonacci term
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int prev=0, curr=1;
    for(int i=2; i<=n; i++){        //2nd position is: 0 1 1*
        int next = prev+curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

//print fibo series
void fibo(int n){
    int prv=0, cur=1;
    for(int i=1; i<=n; i++){
        cout<<prv<<" ";
        int nxt = prv + cur;
        prv = cur;
        cur = nxt; 
    }
}//series can be printed using Array (Dynamic Programming Table) but this is jst eg

int main() {
    cout<<sum(10,5)<<endl;      //arguments r the actual values we pass = literals
    cout<<printHello()<<endl;
    cout<<min(19,20)<<endl;
    cout<<sumofN(10)<<endl;
    cout<<factorialN(4)<<endl;
    cout<<digitSum(1546)<<endl;
    cout<<isPrime(10)<<endl;  //0-false & 1-true
    printPrime(10);     //no cout coz it's a void funcn & doesn't return anyhting
    cout<<endl;
    cout<<fibonacci(7)<<endl;
    fibo(7);
    cout<<endl;
    return 0;
}
//g++ function.cpp -o function.exe && function.exe

/* 
1. How to define a function

int add(int a, int b) {
    return a + b;
}

2. How to call a function
cout << add(3, 5);

3. When you pass a variable to a function, the function gets a copy, not the original.

Example: Pass by value
void fun(int x) {
    x = 10;
}
int main() {
    int a = 5;
    fun(a);
    cout << a;   // Output = 5 (NOT 10)
} 
*/