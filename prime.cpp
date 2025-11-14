#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value: ";
    cin>>n;
    if(n==2){
        cout<<"Prime Number: "<<n;
        return 0;
    }

     if(n<=1 || n%2==0){
        cout<<"Not a Prime Number: "<<n;
        return 0;
    }

    bool isPrime = true;  //suppose n is prime initially
    for(int i=3; i*i<=n; i+=2){

        if (n % i == 0){    //for non-prime //15%5==0
            isPrime = false;
            break;          //once no. declared non-prime no need to check again
        }
    }
    if (isPrime)  
        cout<<"Prime Number: "<<n;
    else
        cout<<"Not-Prime: "<<n;
    return 0; 

}

/* Loop only through odd numbers (i += 2):
Since even numbers (except 2) can’t be prime,
we skip them completely.
Also, we stop at i * i <= n (i.e., √n) to reduce checks.
Example 2: n = 37 (prime number)

If you check divisibility by numbers up to √37 ≈ 6.08 (i.e., up to 6),
you test 2, 3, 4, 5, 6.
None divide 37, so it’s prime —
and there’s no need to check 7, 8, 9, ..., because they’d only multiply to results larger than 37. */